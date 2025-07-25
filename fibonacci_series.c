// Program 13: Find the Fibonacci series up to N terms
#include <stdio.h>

int main() {
    int n, a = 0, b = 1, next;
    // Input number of terms
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    // Print Fibonacci series
    printf("Fibonacci Series: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a);
        next = a + b;
        a = b;
        b = next;
    }
    printf("\n");
    return 0;
}
