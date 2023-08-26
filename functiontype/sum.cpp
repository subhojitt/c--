#include<iostream>
using namespace std;

int add( int num1,int num2, int num3){
    int sum=num1+num2+num3;
    return sum;

}
float add( float num1, float num2,float num3){
    float sum=num1+num2+num3;
    return sum;
}

int main()
{
    float a,b,c;
    cin>>a>>b>>c;
    
    cout<<add(a,b,c)<<endl;

    return 0;
}