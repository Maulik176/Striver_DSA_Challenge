#include <bits/stdc++.h>

int lengthOfLongestConsecutiveSequence(vector<int> &arr, int n) {
    // Write your code here.
    sort(arr.begin(), arr.end());
    int longest = 1;
    int lastSmaller = INT_MIN;
    int curr_count = 0;
    for(int i=0;i<n;i++){
        if(arr[i]-1 == lastSmaller){
            curr_count = curr_count + 1;
            lastSmaller = arr[i];
        }
        else if(arr[i] != lastSmaller){
            curr_count = 1;
            lastSmaller = arr[i];
        }
        longest = max(longest, curr_count);
    }
    return longest;
}
//my solution link - https://www.codingninjas.com/studio/problems/longest-consecutive-sequence_8230708?challengeSlug=striver-sde-challenge&leftPanelTab=1
