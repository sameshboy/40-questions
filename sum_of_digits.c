// Program 12: Find the sum of digits of a number
#include <stdio.h>

int main() {
    int num, sum = 0;
    // Input number
    printf("Enter a number: ");
    scanf("%d", &num);
    // Calculate sum of digits
    while (num != 0) {
        sum += num % 10;
        num /= 10;
    }
    // Output result
    printf("Sum of digits = %d\n", sum);
    return 0;
}
