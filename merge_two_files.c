// Program 39: Merge two files into a third file
#include <stdio.h>

int main() {
    FILE *f1, *f2, *f3;
    char ch;

    // Open source files
    f1 = fopen("file1.txt", "r");
    f2 = fopen("file2.txt", "r");
    f3 = fopen("merged.txt", "w");

    if (f1 == NULL || f2 == NULL || f3 == NULL) {
        printf("Error opening files.\n");
        return 1;
    }

    // Copy contents of first file
    while ((ch = fgetc(f1)) != EOF) {
        fputc(ch, f3);
    }
    fclose(f1);

    // Copy contents of second file
    while ((ch = fgetc(f2)) != EOF) {
        fputc(ch, f3);
    }
    fclose(f2);
    fclose(f3);

    printf("Files merged successfully into merged.txt\n");
    return 0;
}
