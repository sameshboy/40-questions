// Program 23: Find the transpose of a matrix
#include <stdio.h>

int main() {
    int a[10][10], trans[10][10], r, c;
    // Input dimensions
    printf("Enter rows and columns of the matrix: ");
    scanf("%d %d", &r, &c);

    // Input matrix
    printf("Enter matrix elements:\n");
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    // Transpose logic
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            trans[j][i] = a[i][j];

    // Display transpose
    printf("Transpose of the matrix:\n");
    for (int i = 0; i < c; i++) {
        for (int j = 0; j < r; j++)
            printf("%d ", trans[i][j]);
        printf("\n");
    }
    return 0;
}
