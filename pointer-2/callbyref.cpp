#include<iostream>
using namespace std;
void firstAndLast( string name , char ch , int *first,int *last){
        for(int i=0; i<name.size();i++){
            if(ch == name[i]){
                *first=i;
                break;
            }
        }
        for(int i=name.size ()-1; i>=0;i--){
            if(ch == name[i]){
                *last =i;
                break;
            }
        }

}
int main(){
    string name = "sdaoojman";
    char ch ='a';
    int first =-1;
    int last =-1;
    int *fr = &first;
    int *lt= &last;

        firstAndLast(name ,ch, lt, fr);
        cout<<*fr<<" "<<*lt
        <<endl;
        cout<<first<<" "<<last;
        return 0;

}