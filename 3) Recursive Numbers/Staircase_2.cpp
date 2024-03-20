#include <iostream>
#include <vector>
using namespace std;

long ways(int n, vector<long>& dp){
    if(n < 0) return 0;

    if(n == 0 || n == 1) return 1;

    if(dp[n] != -1) return dp[n];

    dp[n] = ways(n-1, dp) + ways(n-2, dp) + ways(n-3, dp);

    return dp[n];
}

long CountWays(int n){
    // Write your code here
    if(n < 0) return 0;

    if(n == 0 || n == 1) return 1;

    vector<long> dp(n+1, -1);

    return ways(n, dp);
}