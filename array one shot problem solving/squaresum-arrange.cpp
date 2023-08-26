#include<iostream>
using namespace std;
int main(){
    int array[]={-5,-4,-3,-2,-1,2,10};
    int n=7;
    int result[n];
    int i=0;
    int j=n-1;
    int k=n-1;

    while(i<=j && k>=0){
        if(abs(array[i])>(abs(array[j]))){
            result[k]=array[i]*array[i];
            i++;
            k--;
        }
        else{
            result[k]=array[j]*array[j];
            j--;
            k--;
        }
    }
    //display the result
    for(int i=0; i<n;i++)
    cout<<result[i]<<" ";

    return 0;

}