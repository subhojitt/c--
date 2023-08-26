#include <iostream>
using namespace std;
int main()
{
     int a=4;
     cout<<sizeof(a)<<endl;//4

     char sp='p';
     cout<<sizeof(sp)<<endl;//1

     bool flag;
     a==sp? flag=true: flag=false;//0=false
     cout<<flag<<endl;

     cout<<(&a)<<endl;//location finder
     
    int b=5;
    cout<<(b++)<<endl;
    int c=(b+9);
    cout<<c<<endl;
    

    
   
    return 0;

}