
#include <iostream>

using namespace std;

int main()
{
    int n ; 
    cin>>n;

    for(int i = n; i>0 ; i--)
    {
       

       for (int j = n; j>=i; j--)
       {
            cout<<char(j+64);
       }

        



        cout<<endl;
       
    }
return 0;
}