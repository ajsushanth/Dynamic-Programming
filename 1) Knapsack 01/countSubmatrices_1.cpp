#include <iostream>
#include <vector>
using namespace std;

int squares(vector<vector<int>>& matrix, int i, int j, int m, int n){
    if(i == m || j == n || matrix[i][j] == 0) return 0;

    int right = squares(matrix, i, j+1, m, n);
    int down = squares(matrix, i+1, j, m, n);
    int down_right = squares(matrix, i+1, j+1, m, n);

    return 1 + min(right, min(down, down_right));
}

int CountSquares(vector<vector<int> > matrix) {
    int m = matrix.size();
    int n = matrix[0].size();
    int res = 0;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if(matrix[i][j] == 1) res += squares(matrix, i, j, m, n);
        }
    }
    return res;
}