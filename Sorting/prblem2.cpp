#include<iostream>
using namespace std;
//fruit sortion o[n]...o[1]
void selectionSort( char fruit[][60], int n){
    for(int i =0; i<n-1;i++){
        int min_ele= i;
        for(int j=i+1;j<n;j++){
            if(strcmp(fruit[min_ele],fruit[j])>0){
                min_ele=j;
            }
        }
        if (i!=min_ele)
        {
            swap(fruit[i], fruit[min_ele]);
        }
        
    }
    return;
}
int main(){
    char fruit[][60]={"papaya","lime","watermelon",
    "apple", "kiwi","mango"};
    int n= 6;
    selectionSort( fruit, n);
    for(int i=0; i<n;i++){
        cout<<fruit[i]<<" ";

    }cout<<endl;
    return 0;

}