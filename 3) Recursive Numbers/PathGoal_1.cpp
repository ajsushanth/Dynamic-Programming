#include <iostream>
#include <vector>
using namespace std;

int path(vector<vector<int>>& matrix, int i, int j, int m, int n){
    if(matrix[i][j] == 1) return 0;
    
    if(i == m-1 && j == n-1) return 1;

    if(i < m-1 && j < n-1) return path(matrix, i+1, j, m, n) + path(matrix, i, j+1, m, n);

    else if(i < m-1) return path(matrix, i+1, j, m, n);

    else return path(matrix, i, j+1, m, n);
}

int FindUniquePath(vector<vector<int>> matrix)
{   // write your code here
    int m = matrix.size();
    int n = matrix[0].size();
    int i=0, j=0;
    return path(matrix, i, j, m, n);   
}