#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;


    int *ptra = &a;
    int *ptrb = &b;

    int result ;

    int *ptr_result = &result;

    *ptr_result =*ptra + *ptra;
    cout<<result<<endl;
    return 0;
}