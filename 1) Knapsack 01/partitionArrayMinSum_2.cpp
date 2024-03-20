#include <iostream>
#include <numeric>
#include <stdlib.h>
#include <vector>
#include <algorithm>
using namespace std;

int minSum(vector<int> nums, int i, int sum1, int sum2, vector<vector<int>>& dp){
    if(i == nums.size()) return abs(sum1 - sum2);
    
    if(dp[i][sum2] != -1) return dp[i][sum2];

    dp[i][sum2] = min(minSum(nums, i+1, sum1 + nums[i], sum2, dp), minSum(nums, i+1, sum1, sum2 + nums[i], dp));

    return dp[i][sum2];
}

int MinimumPartitionArraySumDifference(vector<int>& nums) {
    // Write your code here
    int i=0, sum1=0, sum2=0;
    int rows = nums.size();
    int cols = accumulate(nums.begin(), nums.end(), 0);
    vector<vector<int>> dp(rows, vector<int> (cols+1, -1));
    return minSum(nums, i, sum1, sum2, dp);
}