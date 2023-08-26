#include<iostream>
using namespace std;
int main(){
    int *ptr = NULL; 
    {
        int i=10;
        ptr= &i;
    }
    cout<<ptr;
    return 0;
}