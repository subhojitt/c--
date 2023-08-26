#include<iostream>
using namespace std;
int main(){
    int array[]={1,2,3,4,5,3,0};
    int x=8;
    // code to find out pair of the given sum from the arary
    int i=0;
    int j=6; 
    bool found =false;
    while(i<j){
      if( array[i]+array[j]==x){
        found=true;
        break;
     }
      else if( array[i]+array[j]<x){
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