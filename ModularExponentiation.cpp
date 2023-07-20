#include <bits/stdc++.h>
// #include <iostream>

using namespace std;


int modularExponentiation(int x, int n, int m) {
	// Write your code here.
	if(n==0) return 1;
	long long answer = modularExponentiation(x, n/2, m);
	if(n&1){ //if n is odd
		return ( ((answer*answer)%m) * (x%m))%m; 
	}
	else{
		return (answer * answer)%m;
	}
}

//my solution link :- https://www.codingninjas.com/studio/problems/modular-exponentiation_8230803?challengeSlug=striver-sde-challenge&leftPanelTab=1
