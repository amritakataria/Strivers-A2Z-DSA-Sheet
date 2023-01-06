
#include <bits/stdc++.h>
using namespace std;

int display(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
}


// //method 1 (high time complexity  o(n*n)) 
// int  pushZeroToEnd(int a[], int n)
// {
//     for(int i = 0 ; i<n ; i++)
//     {
//         if(a[i]==0)
//         {
//             for (int j= i+1; j< n; j++)
//             {
//                 if(arr[j]!=0)
//                 {
//                 swap(arr[i],arr[j]);

//                 }
//             }
            
//         }
//     }
// }


//method2 effective solution time complexity o(n)
int  pushZeroToEnd(int a[], int n)
{
        int count=0;

   for(int i = 0 ; i<n ; i++)
   {
    if(a[i]!=0)
    {
        swap(a[i],a[count]);
        count++;
    }
    
   }  

   display(a,n);

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

    pushZeroToEnd(arr, size);

    return 0;
}