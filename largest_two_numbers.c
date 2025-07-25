// Program 5: Find the largest of two numbers
#include <stdio.h>

int main() {
    int x, y;
    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);
    // Compare and print the larger one
    if (x > y)
        printf("%d is larger\n", x);
    else if (y > x)
        printf("%d is larger\n", y);
    else
        printf("Both numbers are equal\n");
    return 0;
}
