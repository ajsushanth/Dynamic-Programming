#include <vector>
#include <iostream>
#include <limits.h>
using namespace std;

bool subset(vector<int>& arr, int i, int total, vector<vector<int>> &dp){
    
    if(total == 0) return true;
    
    if(total < 0 || i == arr.size()) return false;
    
    if(dp[i][total] != -1) return dp[i][total];
    
    dp[i][total] = subset(arr, i+1, total-arr[i], dp) || subset(arr, i+1, total, dp);
    
    return dp[i][total];
}
bool SubsetSum(std::vector<int>& arr, int total) {  
    // write your code here
    vector<vector<int>> dp(arr.size(), vector<int>(total+1, -1));
    int i=0;
    return subset(arr, i, total, dp);
}