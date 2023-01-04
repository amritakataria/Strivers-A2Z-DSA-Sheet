
#include <iostream>

using namespace std;

int main()
{
    int n ; 
    cin>>n;
    
    for(int i = n ; i>0; i--)
    {
        
        
        for(int j = i; j>=1 ; j--)
        {
            cout<<char(64+j);
        }

        
        
        cout<<endl;
    }
    
    return 0;
}