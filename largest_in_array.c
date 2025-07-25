// Program 19: Find the largest element in an array
#include <stdio.h>

int main() {
    int n, i;
    // Input array size
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    // Input elements
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) scanf("%d", &arr[i]);
    // Find largest element
    int max = arr[0];
    for (i = 1; i < n; i++) {
        if (arr[i] > max)
            max = arr[i];
    }
    // Output result
    printf("Largest element = %d\n", max);
    return 0;
}
