#include <bits/stdc++.h>

vector<vector<long long int>> printPascal(int n) 
{
  vector<vector<long long int>>v(n);
  int i=0;
  for(int i=0;i<n;i++){
    for(int j=0;j<=i;j++){
      if(j==0||j==i)
        v[i].push_back(1);
      else 
        v[i].push_back(v[i-1][j-1]+v[i-1][j]);
    }
  }
  return v;
  // Write your code here.
}
//solution link :- https://www.codingninjas.com/codestudio/problems/pascal-s-triangle_8230805?challengeSlug=striver-sde-challenge&leftPanelTab=0

