// Program 4: Swap two numbers using a temporary variable
#include <stdio.h>

int main() {
    int a, b, temp;
    // Input values
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    // Swap using temporary variable
    temp = a;
    a = b;
    b = temp;
    // Display the swapped values
    printf("After swapping: a = %d, b = %d\n", a, b);
    return 0;
}
