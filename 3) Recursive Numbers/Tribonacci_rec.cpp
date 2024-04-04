/*
Statement#
Tribonacci numbers are a sequence of numbers where each number
is the sum of the three preceding numbers. 
Your task is to find the nth Tribonacci number.
*/

long Tribonacci(int n) {
    // Write your code here
    if(n <= 0) return 0;

    if(n == 1 || n == 2) return 1;

    return Tribonacci(n-1) + Tribonacci(n-2) + Tribonacci(n-3);
}