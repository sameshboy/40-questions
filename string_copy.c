// Program 27: Copy one string to another string
#include <stdio.h>

int main() {
    char source[100], destination[100];
    int i = 0;
    // Input string
    printf("Enter a string: ");
    scanf("%s", source);
    // Copy manually
    while (source[i] != '\0') {
        destination[i] = source[i];
        i++;
    }
    destination[i] = '\0';
    // Output copied string
    printf("Copied string: %s\n", destination);
    return 0;
}
