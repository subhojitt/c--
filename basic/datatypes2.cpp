#include<iostream>
using namespace std;
int main()
{
    /*int a,b;
    a=0;
    b=5;
    if(a!=0)
    {
        cout<<(a/b)<<endl;
    }
    else{
    cout<<"the division is impossible "<<endl;
    }*/


    int score;
    cout<<"enter the score scored by the student- ";
    cin>>score;
    if(score>=90){
        cout<<"excellent" ; }

        else if (score>=70)
        {
            cout<<"average " ;

        }
    else{
        cout<<"bad " ;
    }
    return 0;
}