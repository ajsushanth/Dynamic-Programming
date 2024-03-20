// Available numbers are 1, 3, and 4
#include <iostream>
#include <vector>
using namespace std;

long long ways(int n, vector<long long>& dp){
    if(n < 0) return 0;

    if(n == 0) return 1;

    if(dp[n] != -1) return dp[n];

    dp[n] = ways(n - 1, dp) + ways(n - 3, dp) + ways(n - 4, dp);

    return dp[n];
}

long long CountWays(int n){
    // write your code here
    vector<long long> dp(91, -1);
    return ways(n, dp);
}