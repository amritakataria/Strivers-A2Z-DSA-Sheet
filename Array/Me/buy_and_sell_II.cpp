
//On each day, you may decide to buy and/or sell the stock. You can only hold
// at most one share of the stock at any time. However, 
//you can buy it then immediately sell it on the same day.

//Find and return the maximum profit you can achieve.

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int maxProfit(int prices[], int n)
{
        int profit = 0;

        for(int i = 1 ; i<n ; i++)
        {
            if(prices[i] > prices[i-1])
            {
                   profit += profit + (prices[i]-prices[i-1]);
            }
        }

        return profit;
    
    }

int main()
{
    int arr[6] = {7,1,5,3,6,4} ; 
    

    cout<<maxProfit(arr, 6);

    return 0;
}