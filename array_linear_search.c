// Program 26: Search an element in an array (linear search)
#include <stdio.h>

int main() {
    int arr[100], n, key, i, found = 0;
    // Input array size
    printf("Enter number of elements: ");
    scanf("%d", &n);
    // Input elements
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    // Input element to search
    printf("Enter the element to search: ");
    scanf("%d", &key);
    // Linear search
    for (i = 0; i < n; i++) {
        if (arr[i] == key) {
            found = 1;
            break;
        }
    }
    // Output result
    if (found)
        printf("Element %d found at position %d\n", key, i);
    else
        printf("Element not found in the array.\n");
    return 0;
}
