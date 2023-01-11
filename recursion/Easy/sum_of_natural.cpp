#include<iostream>
using namespace std;


int sumOfNatural(int n )
{
    if(n==0)
    {
        return 0 ; 
    }

    else 
    {
        return sumOfNatural(n-1)+n;
    }

}


int main(){
    
    int n ;
    cout<<"Enter the value of n :";
    cin>>n;

    cout<<"Sum of natural no. is: "<<sumOfNatural(n);
    return 0;
}