long CountWays(int n){
    // Write your code here
    if(n < 0) return 0;

    if(n == 0 || n == 1) return 1;

    return CountWays(n-1) + CountWays(n-2) + CountWays(n-3);
}