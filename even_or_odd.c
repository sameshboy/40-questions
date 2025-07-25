// Program 6: Check whether a number is even or odd
#include <stdio.h>

int main() {
    int num;
    // Input a number
    printf("Enter an integer: ");
    scanf("%d", &num);
    // Check and display result
    if (num % 2 == 0)
        printf("%d is even\n", num);
    else
        printf("%d is odd\n", num);
    return 0;
}
