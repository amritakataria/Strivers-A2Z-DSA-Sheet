#include<iostream>
using namespace std;

    void factorial(int N)
    {
        if(N>0)
        {
              
               factorial(N-1)*N; 
                cout<<N<<" ";
               
        }
    

    }


int main(){
    
    int n ;
    cout<<"Enter the value of n :";
    cin>>n;

    cout<<"factorial of "<<n<<": "<<factorial(n);
    return 0;
}