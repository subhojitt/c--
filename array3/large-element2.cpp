#include<iostream>
using namespace std;
int secondlargest(int array[],int size){
    int max=INT_MIN;
    int maximum=INT_MIN;
    for(int i=0; i<size; i++){
        if(array[i]>max){
            max=array[i];
        }
    }
    for(int i=0; i<size; i++){
        if(array[i]>maximum && array[i]==max){
            maximum=array[i];
        }
}
return maximum;
}
int main(){
    int array[]={1,2,3,4,5,5,6,6};
    int size=7;
    cout<<secondlargest(array, size)<<endl;
    
  
}