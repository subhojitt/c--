#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin>>n;

    vector<int> v(n+1,0);
    for(int i =1; i<=n;i++){
        cin>>v[i];
    }
//calculate prefix sum in array

for(int i=1; i<=n; i++){

    v[i]+= v[i-1];
}
        int q;
        cin>>q;

        while (q--)

        {int l,r;
        cin>>l>>r;

        int ans=0;

        //ans= prefixsummaray[r]-prefixsummary[l-1]

        ans=v[r]-v[l-1];
        cout<<ans<<endl;
        }


    return 0;
}