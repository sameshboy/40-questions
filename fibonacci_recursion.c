// Program 33: nth Fibonacci number using recursion
#include <stdio.h>

int fibonacci(int n) {
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;
    // Input position
    printf("Enter the position (n): ");
    scanf("%d", &n);
    // Output result
    printf("%dth Fibonacci number = %d\n", n, fibonacci(n));
    return 0;
}
