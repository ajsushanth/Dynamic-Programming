// Available numbers are 1, 3, and 4
long CountWays(int n){
    // write your code here
    if(n < 0) return 0;

    if(n == 0 || n == 1) return 1;

    return CountWays(n-1) + CountWays(n-3) + CountWays(n-4);
}