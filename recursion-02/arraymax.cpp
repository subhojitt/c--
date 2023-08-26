#include<iostream>
using namespace std;
int f(int *arr, int idx, int n){
    int res=-1;
    if(idx == n-1){
        return arr[idx];
    }
return max (arr[idx], f(arr, idx+1, n));
    
}
 int  main(){
    
    int arr[] = {1,4,5,9,2};
    int  n=5;
   cout<< f(arr, 0, n)<<endl;
    return 0;
 }