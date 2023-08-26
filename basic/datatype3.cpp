#include<iostream>
using namespace std;
int main(){

        /*int cp;
        int sp;
        

        cout<<"enter cp"<<endl;
        cin>>cp;

        cout<<"enter sp"<<endl;
        cin>>sp;


        int dp=cp-sp;
        int pp=sp-cp;

        if(cp>=sp){
            cout<<"you have made a loss idiot "<<dp<<endl;
        }
    
        else{
            cout<<"you have made a profit"<<pp;
            }
*/

        int num1,num2,num3;
        cout<<"enter three numbers";

        cin>>num1>>num2>>num3;

        /*if(num1>num3 && num1>num2){

        cout<<"the maximum number is: "<<num1;}
        else if(num2>num3 && num2>num1){

        cout<<"the maximum number is: "<<num2;}
        else{
            cout<<"the maximum no is: "<<num3;
        }*/

        if(num1>num2){
            if (num1>num3){
                cout<<"the maximum number is: "<<num1<<endl;

            }
            }
           else if(num2>num3){
            if (num2>num1)
            {
                cout<<"the maximum number is: "<<num2<<endl;
                  }
            }
            else{
                cout<<"the maximum number is; "<<num3;

            }
            
        

            return 0;

        
}
