// Program 9: Print the multiplication table of a given number
#include <stdio.h>

int main() {
    int num, i;
    // Input number
    printf("Enter a number: ");
    scanf("%d", &num);
    // Print table
    printf("Multiplication table of %d:\n", num);
    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }
    return 0;
}
