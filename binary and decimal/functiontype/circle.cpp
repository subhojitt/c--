#include<iostream>
using namespace std;

float area(float x){
    return (3.14*x*x);
}
float circumference(float x){
    return (3.14*x*2);
   

}
int main(){
    float a;
    cout<<"enter the radius ";
    cin>>a;
    cout<<"area of the circle is: "<<area(a)<<endl;

    float b ;
    cout<<"enter the radius ";
    cin>>b;
    cout<<"circumference of the circle is: "<<circumference(b)<<endl;

    
    return 0;
}