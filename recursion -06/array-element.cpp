#include<iostream>
using namespace std;
bool f(int *arr , int n , int i, int x){
    if(i==n){
        return false;
    }
    return (arr[i]==x) || f(arr , n ,i+1 , x);
}

int  main(){

int arr[]= {4,5,3,6,8,4,2,6,0};
int n = 9;
int x =11;
bool  result = f( arr , n , 0 , x);
if (result)cout<<"YES"<<endl;
else cout<<"NO"<<endl;


     return 0;
}