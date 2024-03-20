#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

bool check(vector<int>& nums, int i, int sum1, int sum2, vector<vector<int>>& dp){
    
    if(i == nums.size()){
        if(sum1 == sum2) return true;
        return false;
    }

    if(dp[i][sum1] != -1) return dp[i][sum1];

    dp[i][sum1] = check(nums, i+1, sum1 + nums[i], sum2, dp) || check(nums, i+1, sum1, sum2 + nums[i], dp);

    return dp[i][sum1];
}

bool CanPartitionArray(vector<int> nums)
{
    // Write your code here
    int total = accumulate(nums.begin(), nums.end(), 0);
    if(total % 2 != 0) return false;
    int sum1=0, sum2=0;
    int i=0;
    vector<vector<int>> dp(nums.size(), vector<int>(total+1, -1));
    return check(nums, i, sum1, sum2, dp);
}