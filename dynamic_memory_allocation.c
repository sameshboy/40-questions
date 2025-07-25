// Program 40: Dynamic memory allocation using malloc() and free()
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr, n;
    // Input size
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Allocate memory
    arr = (int*) malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory not allocated.\n");
        return 1;
    }

    // Input elements
    printf("Enter %d integers: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    // Display elements
    printf("You entered: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    // Free memory
    free(arr);
    return 0;
}
