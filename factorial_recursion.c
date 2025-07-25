// Program 32: Factorial of a number using recursion
#include <stdio.h>

long long factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

int main() {
    int num;
    // Input number
    printf("Enter a number: ");
    scanf("%d", &num);
    // Output result
    printf("Factorial of %d = %lld\n", num, factorial(num));
    return 0;
}
