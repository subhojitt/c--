#include<iostream>
using namespace std;

bool checkEligibile(int age,int limit)
{
    if( age >= limit)
    {
      return true;
    }
    else {
        return false;
    }
}
    int main()
    {

        int voting_limit=18;

        int eligible= checkEligibile(15,voting_limit);
        if (eligible)
        {
            cout<<"you can vote"<<endl;

        }
        else{
            cout<<" you cannot vote"<<endl;
        }
            
        return 0;
}