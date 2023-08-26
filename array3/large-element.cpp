#include<iostream>
using namespace std;

int largeselement(int array[], int size){
    int max=INT_MIN;
    int maxindex=-1;
    for( int i=0; i<size; i++)
    {
        if ( array[i]>max)   
         {
            max=array[i];
            maxindex=i;
        }
    } 

    return maxindex;
}
int main(){

    //second largest element in array

        int array[]={2,6,8,8,5,7};
        int indexoflargest= largeselement(array,6);
        cout<<array[indexoflargest]<<endl;
            
            //same large number
            int largestelement = array[indexoflargest];
            for(int i=0; i<6;i++)
            {

                if(array[i]==largestelement)
                {
                    array[i]=-1;
                }       
            }

            int indexsecondlargest=largeselement(array,6);

             cout<<array[indexsecondlargest]<<endl;

    return 0;
}