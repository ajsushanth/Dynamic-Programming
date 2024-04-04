#include <iostream>
#include <vector>
using namespace std;

long fibonacci(int n, vector<long long>& dp){
	if(n == 0) return 0;

	if(n == 1 || n == 2) return 1;

	if(dp[n] != -1) return dp[n];

	dp[n] = fibonacci(n-1, dp) + fibonacci(n-2, dp);

	return dp[n];
}

long GetFibonacci(int n) {
	// Write your code here
	if(n == 0) return 0;

	vector<long long> dp(n+1, -1);

	return fibonacci(n, dp);
}