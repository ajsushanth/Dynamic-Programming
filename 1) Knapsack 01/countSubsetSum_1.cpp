#include <vector>
#include <iostream>
#include <limits.h>
using namespace std;

long long countSum(vector<int> &nums, int i, int target){
    if(target == 0) return 1;

    if(i == nums.size() || target < 0) return 0;

    return countSum(nums, i+1, target-nums[i]) + countSum(nums, i+1, target);
}

long CountSubsetSum(vector<int> &nums, int target_sum)
{
    // Replace this placeholder return statement with your code
    int i=0;
    return countSum(nums, i, target_sum);
}