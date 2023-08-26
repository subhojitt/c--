#include<iostream>
using namespace std;  

int main(){
    int x=9;
    int *ptr= &x;
    cout<<ptr<<endl;
    cout<<(ptr+1)<<" "<<(ptr+2)<<endl;

    return 0;
}