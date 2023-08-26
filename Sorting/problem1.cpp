#include<iostream>
#include<vector>
using namespace std;
void sortingArray( vector <int> &v){
    int n = v.size();
    for(int i=0; i<n; i++){
        for(int j=0; j<n ; j++){
            if(v[j]==0){
                swap (v[j],v[j+1]);
               
            }
        
        }
    }
    return;
}
int main(){
    int  n;
    cin>>n;

    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    sortingArray (v);

    for(int j=0; j<n;j++){
        cout<<v[j]<<" ";
    }cout<<endl;
    return 0;
}