#include<iostream>
using namespace std;
void f(int num, int k){
    if(k == 0) return ;
    f(num, k-1);
    cout<<(num*k)<<" ";
}
int main(){
    f(9,8);
    return 0;
}