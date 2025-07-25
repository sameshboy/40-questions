// Program 11: Check whether a number is prime or not
#include <stdio.h>

int main() {
    int num, i, isPrime = 1;
    // Input number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Handle edge cases
    if (num <= 1) isPrime = 0;
    else {
        for (i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }

    // Output result
    if (isPrime)
        printf("%d is a prime number.\n", num);
    else
        printf("%d is not a prime number.\n", num);

    return 0;
}
