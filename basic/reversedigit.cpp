#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    int sp;
    while (n>0)
    {
        int lastdigit=n%10;
        sp=lastdigit;
        n/=10;
        {cout <<sp;}
    }
   
   

    
    
return 0 ;


}