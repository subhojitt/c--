#include<iostream>
using namespace std;

int main()
{ 
    int arr1[]={1,4,6,9,11};
    int arr2[]={0,2,3,7,8,10,12};
    int m=5;
    int n=7;
    //code to merge two sorted arrays
    int result[m+n];

    int i=0; // help us to iterate on arr1
    int j=0; // help us to iterate on arr2
    int k=0; // help us to iterate on result
    while (i<m and j<n)
    {    
    if(arr1[i] <  arr2[j]){
        result[k]=arr1[i];
        i++;
        k++;
    }
    else{
        result[k]=arr2[j];
        j++;
        k++;
    }
      }

      while (i<m){
        //while arr2 was exhausted then arr1 will get printed
        result[k]=arr1[i];
        i++;
        k++;
      }
    while(j<n){
        //while arr1 got exhausted then arr 2 will print
        result[k]=arr2[j];
        j++;
        k++;
    }
      for(int i=0; i<(m+n); i++)
      cout<<result[i]<<" ";
return 0;
}