#include <iostream>
#include <vector>
using namespace std;

long rec (int n, vector<long>& dp){
    if(n <= 0) return 0;

    if(n == 1 || n == 2) return 1;

    if(dp[n] != -1) return dp[n];

    dp[n] = rec(n-1, dp) + rec(n-2, dp) + rec(n-3, dp);

    return dp[n];
}

long Tribonacci(int n) {
    // Write your code here
    vector<long> dp(n+1, -1);
    return rec(n, dp);
}