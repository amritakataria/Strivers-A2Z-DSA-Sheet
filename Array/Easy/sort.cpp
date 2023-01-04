#include <iostream>
using namespace std;


int sort(int arr[] , int n )
{
    for (int i = 1; i <n; i++)
    {
        if(arr[i]<arr[i-1])
        {
            return 0;
        }
    }
    return 1;
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

    int check = sort(arr,size);
    if(check)
    {
        cout<<"Array is sorted";
    }
    else
    {
        cout<<"Array is not sorted";

    }

    return 0;
}