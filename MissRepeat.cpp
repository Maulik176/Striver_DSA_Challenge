#include <bits/stdc++.h>

pair<int,int> missingAndRepeating(vector<int> &a, int n)
{
	pair<int,int> ans;
	// Write your code here 
    int repeating = -1, missing = -1;
    for(int i=1;i<=n;i++){
        int counter = 0;
        for(int j=0;j<a.size();j++){
            if(a[j] == i){
                counter++;
            }
        }
        if(counter == 2){
            repeating = i;
        }
        else if(counter == 0){
            missing = i;
        }
        // if(repeating != -1 && missing != -1){
        //     break;
        // }
    }
    return {missing,repeating};
}

//my sol link - https://www.codingninjas.com/studio/problems/missing-and-repeating-numbers_8230733?challengeSlug=striver-sde-challenge&leftPanelTab=1

