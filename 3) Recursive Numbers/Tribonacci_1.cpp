long Tribonacci(int n) {
    // Write your code here
    if(n <= 0) return 0;

    if(n == 1 || n == 2) return 1;

    return Tribonacci(n-1) + Tribonacci(n-2) + Tribonacci(n-3);
}