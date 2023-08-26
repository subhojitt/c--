#include<iostream>
using namespace std;
int main(){
    int array[]={1,2,1,2,3,4,4,9,3};
    int size=9;
   
    
    
    for(int i=0;i<size;i++){
        for(int j=i+1; j<size;j++)
        
        {
            if( array[i]==array[j]){
                array[i]=array[j]=-1;
            }
        }
    }
    int found=0;
for(int i=0 ;i<size; i++)
{
    if(array[i]>0)
    {
        cout<<array[i];
}
  
}
    return 0;
}