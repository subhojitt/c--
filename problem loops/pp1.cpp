#include<iostream>
using namespace std;
 int main()
 {  int n=5;
  //loop for upper triangle
    for( int line =1; line<= n;line++)
    {  
    
         int space=(n-line);

        for(int j=0;j<space;j++)
        {
           
           cout<<' ';
            
        }
    int no_of_chars=2*line-1;

    for(int i=0; i<no_of_chars; i++)

    { char ch=char('A'+i);
            cout<<ch;
            }
        cout<<endl;
    }
    
//loop for lower triangle
for(int line=n+1; line<=2*n-1; line++)
{
    int spaces= (line-n) ;
    for(int k=0; k< spaces; k++)

   { cout<<' ';

    } 

     int no_of_chars= 2*(2*n-line)-1;

for(int i=0; i<no_of_chars; i++)

    { char ch=char('A'+i);
            cout<<ch;
            }
        cout<<endl;
     }
        return 0;

 }