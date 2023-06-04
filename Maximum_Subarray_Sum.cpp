#include <bits/stdc++.h> 
long long maxSubarraySum(int arr[], int n)
{
    /*
        Don't write main().
        Don't read input, it is passed as function argument.    
        No need to print anything.
        Taking input and printing output is handled automatically.
    */
    long long curr_sum = 0;
    long long ans = INT_MIN;
    for(int i=0;i<n;i++){
        curr_sum += arr[i];
        if(curr_sum < 0){
            curr_sum = 0;
        }
        ans = max(ans,curr_sum);
    }
    return ans;
}

//my solution link - https://www.codingninjas.com/codestudio/problems/maximum-subarray-sum_8230694?challengeSlug=striver-sde-challenge
