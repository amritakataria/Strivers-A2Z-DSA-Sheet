#include <bits/stdc++.h>
using namespace std;

// naive solutionn
// long long sumOfDivisors(int N)
// {
//     // Write Your Code here

//     int sum = 0;
//     for (int i = 1; i <= N; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             if (i % j == 0)
//             {
//                 sum = sum + j;
//             }
//         }
//     }

//     return sum;
// }

// effective solution
long long sumOfDivisors(int N)
{
    // Write Your Code here

    long long sum = 0;
    for (long i = 1; i <= N; i++)
    {

        sum = sum + ((N / i) * i);
    }

    return sum;
}

int main()
{
    int n;

    cout << "Enter the value: ";
    cin >> n;

    cout << "sum of all divisors from 1 to n is: " << sumOfDivisors(n);

    return 0;
}