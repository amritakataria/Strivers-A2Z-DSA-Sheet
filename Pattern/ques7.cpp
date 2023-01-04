
#include <iostream>

using namespace std;

int main()
{
    int n ; 
    cin>>n;
    
    for(int i = 0 ; i<n ; i++)
    {
        
        for(int space = 0 ; space<n-i-1 ; space++)
        {
            cout<<" ";
        }
        
        for(int j = 1; j<=2*i+1 ; j++)
        {
            cout<<"*";
        }
        

        cout<<endl;
    }
    
    
    return 0;
}
