#include<iostream>
using namespace std;
int main(){
    int array[]={0,2,3,4,5,6};
    int i=0;
    int j=5;
    int n=8;
    bool found= false;
    while(i<j){
        if(array[j]-array[i]==n){
            found=true;
            break;
        }
       else if(array[j]<array[i]){
                    i--;
            }
            else{
                j--;
            }
        }
    if(found==true) cout<<"yes";
    else cout<<"no";
    return 0;
}