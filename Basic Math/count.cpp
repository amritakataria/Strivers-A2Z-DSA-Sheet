// Count digits in a number

#include<iostream>
using namespace std;

int static total=0;
int count(int num )
{
    if(num==0)
    {
       return total;
    }

 count(num/10);
 total++;

}
int main()
{
    int n ;
    cout<<"Enter any value ";
    cin>>n;

cout<<count(n);

}