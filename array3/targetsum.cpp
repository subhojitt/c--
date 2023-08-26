#include<iostream>
using namespace std;
int main(){
    int array[]={3,4,6,7,1};
    int targetsum=7;
    int pairs=0;
    
    for(int i=0;i<5;i++){
        for(int j=i+1; j<5;j++)
        {
            if( array[i]+array[j]==targetsum){
                pairs++;
            }
        }
    }
    cout<<pairs<<endl;

    return 0;
}