#include <stdio.h>
#include <vector>
using namespace std;

int minSum(vector<int> nums, int i, int sum1, int sum2){
    if(i == nums.size()) return abs(sum1 - sum2);
    
    return min(minSum(nums, i+1, sum1 + nums[i], sum2), minSum(nums, i+1, sum1, sum2 + nums[i]));
}

int MinimumPartitionArraySumDifference(vector<int> nums) {
    // Write your code here
    int i=0, sum1=0, sum2=0;
    return minSum(nums, i, sum1, sum2);
}