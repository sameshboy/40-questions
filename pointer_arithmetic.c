// Program 34: Demonstrate pointer arithmetic
#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int *ptr = arr;

    printf("Pointer Arithmetic:\n");
    for (int i = 0; i < 5; i++) {
        printf("Address: %p, Value: %d\n", ptr + i, *(ptr + i));
    }
    return 0;
}
