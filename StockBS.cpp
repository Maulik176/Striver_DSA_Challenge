#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
    // Write your code here.
    int n = prices.size();
    int profit = 0;
    int minPrice = INT_MAX;
    for(int i=0;i<n;i++){
        minPrice = min(minPrice, prices[i]);
        int cost = prices[i] - minPrice;
        profit = max(profit, cost);
    }
    return profit;
}
//my sol link - https://www.codingninjas.com/studio/problems/best-time-to-buy-and-sell-stock_8230746?challengeSlug=striver-sde-challenge&leftPanelTab=1
