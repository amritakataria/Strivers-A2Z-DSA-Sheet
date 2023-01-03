//largest element in an array
#include <iostream>
using namespace std;

int display(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
}

int max(int array[], int size)
{
    int maximum = array[0];
    for (int i = 0; i < size; i++)
    {
        if (array[i] > maximum)
        {
            maximum = array[i];
        }
    }

    return maximum;
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
    }

    cout << "Elements of an array are : ";
    display(arr, size);
    cout << endl;

    cout << "max element is : " << max(arr, size);

    return 0;
}