#include <iostream>
using namespace std;

//this method will give TLE Time = o(n) , space=o(n)
// long long sumOfSeries(long long N) {
        
//          if(N==0)
//      {
//          return 0;
//      }
     
//      return sumOfSeries(N-1)+N*N*N;
    
//     }


//this method give time = o(1) , space = o(1)
long long sumOfSeries(long long N) {
     
     
     long long sum=N*(N+1)/2;
     
     
     return sum*sum;
    
     
        // code here
    }

int main()
{
    int n ;

    cout<<"Enter value of n: ";
    cin>>n;

    cout<<"Sum of series is : "<<sumOfSeries(n);


    return 0;
}