#include<iostream>
using namespace std;
int pow(int p, int q){
    //base case
    if(q==0) return 1;
    if(q%2==0) {
        //if q is even
        int result = pow(p,q/2);
        return result * result;
    }
    else{
        //if q is odd
        int result =pow(p,(q-1)/2);
        return p* result* result;
    }
}


int f(int n, int d){
    if(n==0) return 0;

 return pow(n%10,d) + f(n/10,d);
}

int main  (){
    int n;
    cin>>n;

    int no_digits=0;
    int temp=n;
    while(temp>0){
        temp = temp / 10;
        no_digits++;
    }
    int result = f(n, no_digits);
    if(result==n){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }


    return 0;
}