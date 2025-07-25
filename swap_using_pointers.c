// Program 35: Swap two numbers using pointers
#include <stdio.h>

void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int a, b;
    // Input values
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    // Swap using pointers
    swap(&a, &b);
    // Output swapped values
    printf("After swapping: a = %d, b = %d\n", a, b);
    return 0;
}
