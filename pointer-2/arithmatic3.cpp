#include<iostream>
using namespace std;
int main(){
    int arr[2]={1,4};
    int *ptr= &arr[0];
    cout<<*++ptr<<endl;
    return 0;
}