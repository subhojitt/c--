#include<iostream>
using namespace  std;
//find the square of p & q
int f(int p, int q)
{
    if(q == 0) return 1;
    //base case
    return p * f(p,q-1);
}
int main(){
    int p,q;
    cin>>p>>q;
    int result =f(p,q);
    cout<<result<<endl;
    return 0;
}