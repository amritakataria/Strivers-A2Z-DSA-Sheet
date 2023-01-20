#include <iostream>
using namespace std;


void palindrome(int n)
{
    int num = n;

    int reverse = 0;

    while(n!=0)
    {
        int digit = n%10;
        reverse = reverse*10 + digit;
        n=n/10;
    }

    if(reverse==num)
    {
        cout<<"no. is palindrome";
    }
    else 
    {
        cout<<"not a palindrome";
    }
    
}
int main()
{
    int n ; 
    cout<<"Enter value of a number: ";
    cin>>n;

    palindrome(n);

    return 0;
}