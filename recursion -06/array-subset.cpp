#include<iostream>
#include<vector>
using namespace std;

void f(int *arr , int n, int i,int sum , vector<int> &result){
    if(i==n){
        result.push_back(sum);
         return;

    }
    f(arr , n ,i+1 ,sum +arr[i], result);
    f(arr, n , i+1, sum, result);
}

int main(){
    int arr[]={1,2,3};
    int n=3;
    vector<int>result;
    int  sum =0;
    f(arr,n, 0,sum,result);
    for(int i = 0 ; i < result.size(); i++){
        cout<<result[i]<<" ";
    }
    return 0;
}