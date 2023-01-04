
#include <iostream>

using namespace std;

int main()
{
    int n ; 
    cin>>n;
    
    for(int i = n ; i>0 ; i--)
    {
        
        for(int space = n ; space>i ; space--)
        {
            cout<<" ";
        }
        
        for(int j = 1; j<=2*i-1 ; j++)
        {
            cout<<"*";
        }
        
        cout<<endl;
    }
    
    return 0;
}

