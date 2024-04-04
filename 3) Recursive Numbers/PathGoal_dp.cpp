/*
Given a robot located at the top-left corner of an mxn matrix, determine the number 
of unique paths the robot can take from start to finish while avoiding all obstacles 
on the matrix.The robot can only move either down or right at any time.  
The robot tries to reach the bottom-right corner of the matrix. 
An obstacle is marked as 1, and an unoccupied space is marked as 0 in the matrix.
*/

#include <iostream>
#include <vector>
using namespace std;

int uniquePath(vector<vector<int>>& matrix, int i, int m, int j, int n, vector<vector<int>>& path){
    if(i == m || j == n || matrix[i][j] == 1) return 0;

    if(i == m-1 && j == n-1) return 1;

    if(path[i][j] != -1) return path[i][j];

    path[i][j] = uniquePath(matrix, i+1, m, j, n, path) + uniquePath(matrix, i, m, j+1, n, path);

    return path[i][j];
}

int FindUniquePath(vector<vector<int>> matrix)
{   // write your code here
    int m = matrix.size();
    int n = matrix[0].size();
    int i=0, j=0;

    vector<vector<int>> path = matrix;
    for(int i=0; i<path.size(); i++){
        fill(path[i].begin(), path[i].end(), -1);
    }

    return uniquePath(matrix, i, m, j, n, path);
}