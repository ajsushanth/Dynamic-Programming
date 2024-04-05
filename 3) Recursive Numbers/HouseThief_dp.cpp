#include <iostream>
#include <vector>
using namespace std;

int rob(int i, vector<int>& money, vector<int>& dp){
  if(i >= money.size()) return 0;

  if(dp[i] != 0) return dp[i];

  dp[i] = max(rob(i+2, money, dp) + money[i], rob(i+1, money, dp));

  return dp[i];
}

int HouseThief(vector<int>& money){
  //your code will replace the placeholder return statement below
  int i=0;
  vector<int> dp(money.size(), 0);
  return rob(i, money, dp);
}