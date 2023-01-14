#include<iostream>
using namespace std;

    void reverse(int arr[] , int n ){
        if(n>0)
        {
           cout<<arr[n-1]<<" ";
           reverse(arr,n-1); 
        }
    

    }


int main(){
    
    int arr[100], size, n, key;
    cout << "Enter size of an array: ";
    cin >> size;

    cout << "Enter elements: ";

    for (int i = 0; i < size; i++)
    {

        cin >> arr[i];
    }

    reverse(arr,size);
}