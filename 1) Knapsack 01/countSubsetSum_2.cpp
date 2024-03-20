#include <vector>
#include <iostream>
#include <limits.h>
using namespace std;

long long countSum(vector<int> &nums, int i, int sum, int target, vector<vector<long long>>& dp){
    if(target == sum) return 1;

    if(i == nums.size() || target < sum) return 0;

    if(dp[i][sum] != -1) return dp[i][sum];

    dp[i][sum] = countSum(nums, i+1, sum + nums[i], target, dp) + countSum(nums, i+1, sum, target, dp);

    return dp[i][sum];
}

long CountSubsetSum(vector<int> &nums, int target_sum)
{
    // Replace this placeholder return statement with your code
    int i=0, sum=0;
    vector<vector<long long>> dp(nums.size()+1, vector<long long>(target_sum+1, -1));
    return countSum(nums, i, sum,target_sum, dp);
}