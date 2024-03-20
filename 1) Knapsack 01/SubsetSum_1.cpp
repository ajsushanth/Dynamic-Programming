#include <vector>
#include <string>
#include <iostream>
#include <limits.h>
using namespace std;

bool SubsetSumRec(vector<int>& arr, int i, int total){
    // Base Cases
    if(total == 0) return true;

    if(i == arr.size() || total < 0) return false;

    // Recursively checking for Subset sums
    return SubsetSumRec(arr, i+1, total-arr[i]) || SubsetSumRec(arr, i+1, total);
}

bool SubsetSum(std::vector<int>& arr, int total) {  
    // write your code here
    int i=0;
    return SubsetSumRec(arr, i, total);
}
