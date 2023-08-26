#include<iostream>
using namespace std;
int main()
{


        int num1,num2;
        cout<<"enter num1 and num2";
        cin>>num1>>num2;


cout<<"choose an operator(=,-,/,%,*)"<<endl;
char op;
cin>>op;


switch(op)
    {
    case'+':
    cout<<"the answer is "<<num1+num2<<endl;
    break;

    case'-':
    cout<<"the answer is "<<num1-num2<<endl;
    break;

    case'*':
    cout<<"the answer is "<<num1*num2<<endl;
    break;

    case'/':
    cout<<"the answer is "<<num1/num2<<endl;
    break;

    case'%':
    cout<<"the answer is "<<num1%num2<<endl;
    break;
    
    default:
    cout<<"enter a valid output";
}

return 0;
}