#include<iostream>
#include<vector>
using namespace std;
void selectSort(vector<int> &v){
    int n = v.size();
    for(int i=0; i<n-1; i++){
        int min_index = i ;
        for(int j=i+1; j<n; j++){
            if(v[j]<v[min_index]){
            min_index=j;
        }
        }
        if(i!= min_index){
           swap(v[i],v[min_index ]);
        }
    }
    return;
}

 int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n;i++){
        cin>>v[i];
    }
    selectSort(v);

    for(int j=0; j<n; j++){
        cout<<v[j]<<" ";
    }cout<<endl;
    return 0;
 }