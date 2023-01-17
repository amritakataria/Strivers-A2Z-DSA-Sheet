#include <iostream>
using namespace std;

    long long toh(int N, int source, int destination, int aux) {
          int count = 0;

        // Your code here
        
        if(N==0)
        {
            return count;
        }
        
    toh(N-1,source,aux,destination);
    cout<<"move disk "<<N<<" from rod "<<source<<" to rod "<<destination<<endl;
    count = count+1;
    toh(N-1,aux,destination,source);
    }

int main()
{
    int N , s , d, h;
    toh(1,1,3,2);
 
    return 0;
}