#include<iostream>
using namespace std;
int f(int n){
    if(n==0) return 0;
    return f(n-1)+((n%2==0)? (-n):(+n));
}
int main(){
    cout<<f(10)<<endl;
    return 0;
}