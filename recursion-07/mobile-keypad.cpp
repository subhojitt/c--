#include<iostream>
#include<vector>
using namespace std;
void f(string &str, int n, string result, vector<string> &li, vector<string> &v){
    if(n== str.size()){
        li.push_back(result);
        return;
            }
    int digit=str[n] -'0';
    if(digit <-1){
        f(str, n+1, result,li,v);
        return;
    }
    for(int j=0 ; j<v[digit].size();j++){
        f(str, n+1, result+v[digit][j],li,v);
    }



}
int main(){
    vector<string> v (10);
    v = { "","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    string str = "23";
    vector<string> li;
    f(str, 0 ,"", li,v);
    for(int i ; i < li.size();i++){
        cout<<li[i]<<" ";
    }
    return 0;
}