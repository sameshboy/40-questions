// Program 38: Read and write data to a file
#include <stdio.h>

int main() {
    FILE *fptr;
    char data[100];

    // Write to file
    fptr = fopen("file.txt", "w");
    if (fptr == NULL) {
        printf("Error opening file for writing.\n");
        return 1;
    }
    printf("Enter some text to write to file: ");
    fgets(data, sizeof(data), stdin);
    fputs(data, fptr);
    fclose(fptr);

    // Read from file
    fptr = fopen("file.txt", "r");
    if (fptr == NULL) {
        printf("Error opening file for reading.\n");
        return 1;
    }
    printf("\nData read from file:\n");
    while (fgets(data, sizeof(data), fptr)) {
        printf("%s", data);
    }
    fclose(fptr);
    return 0;
}
