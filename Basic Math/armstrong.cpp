#include <iostream>
using namespace std;

int armstrong(int n )
{
    int num = n;
    int sum = 0;

    while(n>0)
    {
        int a = n%10;
        int cube = a*a*a;
        sum = sum + cube ;
        n=n/10;
    }

    if(sum==num)
    {
        return true;
    }

 return false;
}

int main()
{
    int n ;

    cout<<"Enter value of a number: ";
    cin>>n;


    if(armstrong(n))
    {
        cout<<"yes , no. is armstrong";
    }
    else
    {
          cout<<"no, no. is not armstrong";
    }
    return 0; 
}