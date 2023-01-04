
#include <iostream>

using namespace std;

int main()
{
    int n ; 
    cin>>n;

    
    
    for(int i = 1 ; i<=n ; i++)
    {
        for (int j = 1; j<=n; j++)
        {

            
            if(j<=i)
            {
                cout<<j;
            }

            

            else
            {
                cout<<" ";
            }
             cout<<" ";
        }

        for (int k = n; k>0; k--)
        {
           
            if(k>i)
            {
              cout<<" ";
            }

            else{
                cout<<k;
            }
             cout<<" ";

        }
        
        

        cout<<endl;
    }
    

    return 0;
}
