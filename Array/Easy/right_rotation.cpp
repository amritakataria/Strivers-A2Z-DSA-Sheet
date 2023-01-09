#include <iostream>
using namespace std;

int display(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
}

void reverse(int arr[], int start, int end)
{
    int temp;
    while (start < end)
    {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}
void rightRotate(int arr[], int k, int n)
{
    k = k % n;

    reverse(arr, n - k, n - 1);
    reverse(arr, 0, n - k - 1);

    reverse(arr, 0, n - 1);

    display(arr, n);
}

int main()
{
    int arr[100], size, n, pos;
    cout << "Enter size of an array: ";
    cin >> size;

    cout << "Enter elements: ";

    for (int i = 0; i < size; i++)
    {

        cin >> arr[i];
    }

    cout << "Elements of an array are : ";
    display(arr, size);
    cout << endl;

    cout << "until how many position you want to rotate an array: ";
    cin >> pos;

    cout << "left rotation is: " << endl;

    rightRotate(arr, pos, size);
    return 0;
}