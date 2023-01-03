//Find Second Largest Element in an array(without sorting)

#include <bits/stdc++.h>
using namespace std;

int secondLarge(int arr[], int n)
{
    int large = arr[0];
    int second_large = -1;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > large)
        {
            second_large = large;
            large = arr[i];
        }

        else if (arr[i] > second_large && arr[i] != large)
        {
            second_large = arr[i];
        }
    }

    return second_large;
}

int main()
{
    int arr[100], size;
    cout << "Enter size of an array: ";
    cin >> size;

    cout << "Enter elements: ";

    for (int i = 0; i < size; i++)
    {

        cin >> arr[i];
    }    if (size == 0 || size == 1)
    {
        cout << "second largest element is: "
             << "-1";
    }
    else
    {
        cout <<"second largest element is: "<< secondLarge(arr, size);
    }

    return 0;
}