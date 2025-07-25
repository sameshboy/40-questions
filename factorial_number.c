// Program 8: Find the factorial of a given number
#include <stdio.h>

int main() {
    int n, i;
    long long factorial = 1;
    // Input number
    printf("Enter a number: ");
    scanf("%d", &n);
    // Calculate factorial
    for (i = 1; i <= n; i++) {
        factorial *= i;
    }
    // Output result
    printf("Factorial of %d = %lld\n", n, factorial);
    return 0;
}
