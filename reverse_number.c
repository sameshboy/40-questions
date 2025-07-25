// Program 10: Reverse a given number
#include <stdio.h>

int main() {
    int num, reversed = 0;
    // Input number
    printf("Enter a number: ");
    scanf("%d", &num);
    // Reverse the digits
    while (num != 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }
    // Output reversed number
    printf("Reversed number = %d\n", reversed);
    return 0;
}
