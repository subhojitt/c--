#include<iostream>
using namespace std;
bool isprime( int num){
    for(int i=2; i<(num-1); i++)
        {
            if(num%i==0){
                return false;
            }
            
        }
        return true;

}
int main(){
    int x=2;
    int y=40;
    for(int i=x; i<=y; i++)
    if(isprime(i))
    {
        cout<<i<<" ";
    }
    
    return 0;
}
