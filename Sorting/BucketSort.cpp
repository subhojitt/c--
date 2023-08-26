#include<iostream>
#include<vector>
using namespace std;
void bucketSort(float arr[], int size){
    vector<vector<float> > bucket ( size,vector<float>());
    for(int i=0; i<size;i++){
        int index= arr[i]*size;
        bucket[index].push_back(arr[i]);
    }
    for(int i=0; i<size;i++){
        if(!bucket[i].empty()){
        sort(bucket[i].begin(),bucket[i].end());
        }
    }
    int k=0;
    for(int i=0; i<size; i++){
        for(int j=0; j<bucket[i].size();j++){
            arr[k++]= bucket[i][j];
        }
    }

}

 int main(){
    float arr[]={0.12,0.83,0.24,0.33,0.48,0.67,0.56,0.95};
    int size= sizeof (arr)/sizeof(arr[0]);

    bucketSort(arr, size);

    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    return 0;

 }