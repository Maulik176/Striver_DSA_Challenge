//Merge Overlapping Sub-intervals - Brute
#include <bits/stdc++.h> 
/*

    intervals[i][0] = start point of i'th interval
    intervals[i][1] = finish point of i'th interval

*/

vector<vector<int>> mergeIntervals(vector<vector<int>> &intervals)
{
    // Write your code here.
    int n = intervals.size();
    sort(intervals.begin(), intervals.end());
    vector<vector<int>> ans;
    for (int i = 0; i < n; i++) {
      int start = intervals[i][0];
      int end = intervals[i][1];
      if (!ans.empty() && end <= ans.back()[1]){ 
          //the current interval is alrwady a part of the optimal interval in ans array
          continue;
      }
      for(int j=i+1;j<n;j++){
          if(intervals[j][0] <= end){
              end = max(end, intervals[j][1]);
          }
          else{
              break;
          }
      }
      ans.push_back({start,end});
    }
    return ans;
}

//my solution link - https://www.codingninjas.com/studio/problems/merge-intervals_8230700?challengeSlug=striver-sde-challenge&leftPanelTab=1
