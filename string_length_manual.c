// Program 28: Find the length of a string without using library functions
#include <stdio.h>

int main() {
    char str[100];
    int length = 0;
    // Input string
    printf("Enter a string: ");
    scanf("%s", str);
    // Count characters manually
    while (str[length] != '\0') {
        length++;
    }
    // Output length
    printf("Length of the string: %d\n", length);
    return 0;
}
