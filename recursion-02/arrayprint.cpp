#include<iostream>
using namespace std;
void f(int *arr, int idx, int n){
    if(idx == n) return;
    cout<<arr[idx]<<endl;

    return f(arr ,idx+1 , n);
}
int main(){
    int n=5;
    int arr[]={1,2,3,4,5};
    f(arr, 0, n);
    return 0;
}