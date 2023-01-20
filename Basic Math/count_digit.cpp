

#include <iostream>
using namespace std;

int count(int num)
{
    int total = 0;
    int numb = num;
    while (num != 0)
    {
        int a = num % 10;
        if(a != 0)
        {
            if (numb % a == 0)
            {
                total++;
            }
        }

        num = num / 10;
    }

    return total;
}
int main()
{
    int n;
    cout << "Enter any value ";
    cin >> n;

    cout << count(n);
}
