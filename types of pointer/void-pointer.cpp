#include <iostream>
using namespace std;
int main(){ 
    int a=30;
    float b=7;
    void *ptr = &b;
    ptr = &a;

    // int pointer dereferencing
    int *p1 = (int *)ptr;

    // we cannot dereference in void pointer directly
    cout<<*p1;
    return 0;
}