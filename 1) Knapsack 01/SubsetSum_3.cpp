#include <vector>
#include <iostream>
#include <limits.h>
using namespace std;

bool SubsetSum(std::vector<int>& arr, int total) {  
    // write your code here
    // declaring the DP table
    vector<vector<int>> dp(arr.size()+1, vector<int>(total+1, 0));
    
    // initializing the DP table 
    for(int i=0; i<arr.size()+1; i++){
        for(int j=0; j<total+1; j++){
            if(i == 0) dp[i][j] = false;
            if(j == 0) dp[i][j] = true;
        }
    }

    // solving
    for(int i=1; i<arr.size()+1; i++){
        for(int j=1; j<total+1; j++){
            if(arr[i-1] > j) dp[i][j] = dp[i-1][j];
            else dp[i][j] = dp[i-1][j-arr[i-1]] || dp[i-1][j];
        }
    }
    return dp[arr.size()][total];
}
