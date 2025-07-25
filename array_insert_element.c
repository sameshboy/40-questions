// Program 24: Insert an element in an array
#include <stdio.h>

int main() {
    int arr[100], n, i, pos, value;
    // Input array size
    printf("Enter number of elements: ");
    scanf("%d", &n);
    // Input array elements
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    // Input position and value to insert
    printf("Enter position to insert (0 to %d): ", n);
    scanf("%d", &pos);
    printf("Enter value to insert: ");
    scanf("%d", &value);

    // Shift elements right
    for (i = n; i > pos; i--)
        arr[i] = arr[i - 1];
    arr[pos] = value;
    n++;

    // Display updated array
    printf("Updated array: ");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
    return 0;
}
