#include<iostream>
using namespace std;
int gcd(int a, int b){
    if(b>a) return gcd(b,a);
    if(b==0) return a;
    return gcd(b, a%b);
}

int main(){
    cout<< gcd(8,8);
    return 0;
}