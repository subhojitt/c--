#include<iostream>
using namespace std;
int main(){
    
    int j=10;
    float k=30;
    //storing address using pointer
    int *ptr = &j;
    //printing adress using pointer
    cout<<ptr<<endl;
    //printer value of given  v ariable using pointer
    cout<<*ptr<<endl;

    float *ptrd = &k;
    cout<<ptrd<<endl;
    cout<<*ptrd<<endl;

    //updating value by given variable
    j=23;
    cout<<*ptr<<endl;

    //updating value by ptr
    *ptr=34;
    //printing the value of variable
    cout<<j<<endl;
    return 0;
    
    }   