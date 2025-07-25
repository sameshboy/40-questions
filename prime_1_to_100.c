// Program 18: Print all prime numbers between 1 and 100
#include <stdio.h>

int main() {
    int i, j, isPrime;
    printf("Prime numbers between 1 and 100 are:\n");
    for (i = 2; i <= 100; i++) {
        isPrime = 1;
        for (j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                isPrime = 0;
                break;
            }
        }
        if (isPrime) printf("%d ", i);
    }
    printf("\n");
    return 0;
}
