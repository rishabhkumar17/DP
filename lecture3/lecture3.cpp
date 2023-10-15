/*
Problem:
	Find the sum of the first N numbers.

Objective function:
	f(i) is the sum of the first i elements.

Recurrence relation:
	f(n) = f(n-1) + n
 */

#include <iostream>

int sumN(int n) {
    int dp[n+1];
    dp[0] = 0;
    for(int i=1; i<n+1; i++) {
        dp[i] = dp[i-1] + i;
    }
    return dp[n];
}

int main() {

    int n = 3;
    int sum = sumN(n);
    std::cout<<sum;
}
