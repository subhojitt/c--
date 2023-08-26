#include<iostream>
using namespace std;
void f(int n){
    //base case
    if(n<1) return ;
    f(n-1);
    cout<<n<<" ";

}
int main(){
    int n=5;
    f(n);
    return 0;
}