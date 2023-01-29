//find max profit maximize your profit by choosing a single day to buy one stock 
//and choosing a different day in the future to sell that stock.

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int maxProfit(int prices[], int n)
{

        int minElement = prices[0];
        int maxProfit = 0;

     for(int i = 1 ; i<n ; i++)
     {
         if(prices[i] < minElement)
         {
             minElement = prices[i];
         }

         int profit = prices[i] - minElement;

         if(maxProfit < profit)
         {
             maxProfit = profit;
         }
          
     }
  return maxProfit;      
    }
    


int main()
{
    int arr[6] = {7,1,5,3,6,4} ; 
    

    cout<<maxProfit(arr, 6);

    return 0;
}