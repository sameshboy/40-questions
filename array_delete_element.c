// Program 25: Delete an element from an array
#include <stdio.h>

int main() {
    int arr[100], n, pos, i;
    // Input array size
    printf("Enter number of elements: ");
    scanf("%d", &n);
    // Input array elements
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    // Input position to delete
    printf("Enter position to delete (0 to %d): ", n - 1);
    scanf("%d", &pos);

    if (pos < 0 || pos >= n) {
        printf("Invalid position.\n");
        return 1;
    }

    // Shift elements left
    for (i = pos; i < n - 1; i++)
        arr[i] = arr[i + 1];
    n--;

    // Display updated array
    printf("Updated array: ");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
    return 0;
}
