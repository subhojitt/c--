#include<iostream>
using namespace std;

int square(int x){
    return x*x;
}
int main(){
    for(int x=1; x<=5; x++){
        cout<<square(x)<<endl;
    }
    return 0;
}