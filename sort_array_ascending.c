// Program 20: Sort an array in ascending order
#include <stdio.h>

int main() {
    int n, i, j, temp;
    // Input array size
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    // Input array elements
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) scanf("%d", &arr[i]);
    // Bubble sort logic
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    // Output sorted array
    printf("Sorted array in ascending order: ");
    for (i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");
    return 0;
}
