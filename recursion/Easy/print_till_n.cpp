#include<iostream>
using namespace std;

    void printNos(int N)
    {
        if(N>0)
        {
               printNos(N-1); 
               cout<<N<<" ";
        }
    

    }


int main(){
    
    int n ;
    cout<<"Enter the value of n :";
    cin>>n;

    printNos(n);
    return 0;
}