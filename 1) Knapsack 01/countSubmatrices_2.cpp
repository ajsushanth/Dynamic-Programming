#include <iostream>
#include <vector>
using namespace std;

int squares(vector<vector<int>>& matrix, int i, int j, int m, int n, vector<vector<int>>& dp){
    if(i == m || j == n || matrix[i][j] == 0) return 0;

    if(dp[i][j] != -1) return dp[i][j];

    int right = squares(matrix, i, j+1, m, n, dp);
    int down = squares(matrix, i+1, j, m, n, dp);
    int down_right = squares(matrix, i+1, j+1, m, n, dp);

    dp[i][j] = 1 + min(right, min(down, down_right));

    return dp[i][j];
}

int CountSquares(vector<vector<int> > matrix) {
    int m = matrix.size();
    int n = matrix[0].size();
    int res = 0;
    vector<vector<int>> dp(matrix.size(), vector<int>(matrix[0].size(), -1));
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if(matrix[i][j] == 1 && dp[i][j] == -1) res += squares(matrix, i, j, m, n, dp);
            else if(matrix[i][j] == 1 && dp[i][j] != -1) res += dp[i][j];
        }
    }
    return res;
}