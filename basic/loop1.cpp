#include<iostream>
using namespace std;
int main(){
    int a;
    cin>>a;

    int sum=0;
    int i=1;//loop variable
//while loop
 /* while(i<=a){
        sum+=i;
        i++;
    }*/

    //for loop
    for(i=1; i<=a;i++)
    {sum+=i;
    }

    cout<<sum<<endl;
     
return 0;
}
