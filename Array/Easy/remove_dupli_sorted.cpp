
#include <iostream>
using namespace std;

int display(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
}

int removeDuplicate(int a[], int n)
{
    int res = 1;
    for (int i = 1; i < n; i++)
    {
        if (a[i] != a[res - 1])
        {
            a[res] = a[i];
            res++;
        }
    }

    display(a, res);
}

int main()
{
    int arr[100], size, n;
    cout << "Enter size of an array: ";
    cin >> size;

    cout << "Enter elements: ";

    for (int i = 0; i < size; i++)
    {

        cin >> arr[i];
    }

    removeDuplicate(arr, size);

    return 0;
}
