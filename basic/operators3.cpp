#include <iostream>
using namespace std;
int main()
{
    //bits operators
        int A =5;//0101
    cout<<( A<<1)<<endl;//10
    cout<<( A >>1)<<endl;//2

    int b=8;//1000
    cout<<(A|b)<<endl;//13
    cout<<(A & b )<<endl;//0

    return 0;
}