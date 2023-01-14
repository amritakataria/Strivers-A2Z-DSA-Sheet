#include <iostream>
#include <vector>
using namespace std;

long long fact(long long N)
{
    if (N == 0)
    {
        return 1;
        
    }
    return N * fact(N - 1);
}

vector<long long> factorialNumbers(long long N)
{
    // Write Your Code here
    vector<long long> v;
    long long i = 1;
    while (fact(i) <= N)
    {
        v.push_back(fact(i));
        i++;
    }

    return v;
}

int main()
{
    long long n;

    cout << "Enter value of n: ";
    cin >> n;

vector<long long> result = factorialNumbers(n);
    for(auto num:result)
    {
        cout<<num<<" ";
    }

    return 0;
}