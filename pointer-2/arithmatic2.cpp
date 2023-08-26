#include<iostream>
using namespace std;
int main(){
    int arr[2]={1,5};
    int *ptr = &arr[0];
    cout<<++*ptr<<endl;
    
    cout<<arr[0]<<endl;
    return 0;
}