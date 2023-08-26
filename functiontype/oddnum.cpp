#include<iostream>
using namespace std;

    bool isodd(int num)
    {
        if(num%2==0)
        {
            return false;
        }
        else{
            return true;

        }
    }
    int main(){
        int a=1;
        int b=10;
        for(int i =a; i<=b; i++){
        if (isodd(i))
        {
            cout<<i<<endl;
        }

        }
        return 0;
    }