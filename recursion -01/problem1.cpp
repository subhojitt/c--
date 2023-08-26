#include<iostream>
using namespace std;

// to find out the the sum of the digits of the integers
int f(int n){
    if(n>=0 && n <=9) return n;
     return f(n/10) + f(n%10);


}
int main(){
    int n;
   cin>>n;
    int result = f(n);
    cout<<result<<endl;
    return 0;
}