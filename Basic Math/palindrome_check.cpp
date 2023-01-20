#include <iostream>
using namespace std;

bool isPalindrome(int x)
{
    // Code here.
    long long int num = x , reverse = 0;

    while (x != 0)
    {
        long long int digit = x % 10;
        reverse = reverse * 10 + digit;
        x = x / 10;
    }

    if (num == reverse && num >= 0)
    {
        return true;
    }

    return false;
}

int main()
{
    int n;
    cout << "Enter value of a number: ";
    cin >> n;

    cout << isPalindrome(n);

    return 0;
}