
#include <iostream>

using namespace std;

int main()
{
    int n ; 
    cin>>n;

    for(int i = 0 ; i<n ; i++)
    {
       for(int space = n-1 ; space > i; space-- )
       {
        cout<<" ";
       }

       for (int j = 0; j <= i; j++)
       {
        cout<<"*"<<" ";
       }

        cout<<endl;
       
    }

    for(int i = n ; i>0 ; i--)
    {
       for(int space = n ; space > i; space-- )
       {
        cout<<" ";
       }

       for (int j = 1; j <= i; j++)
       {
        cout<<"*"<<" ";
       }

        cout<<endl;
       
    }

   
    return 0;
}
