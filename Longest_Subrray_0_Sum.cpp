#include <bits/stdc++.h>

int LongestSubsetWithZeroSum(vector < int > arr) {

  // Write your code here
  int n = arr.size();
  map<int,int> mpp;
  int preSum = 0;
  int longest = 0;
  for(int i=0;i<n;i++){
    preSum += arr[i];
    if(preSum == 0){
      longest = i+1;
    }
    else{
      if(mpp.find(preSum) != mpp.end()){
        longest = max(longest, i-mpp[preSum]);
      }
      else{
        mpp[preSum] = i;
      }
    }
  }
  return longest;

}
//my solution link - https://www.codingninjas.com/studio/problems/longest-subarray-zero-sum_8230747?challengeSlug=striver-sde-challenge&leftPanelTab=1
