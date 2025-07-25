// Program 17: Count the number of digits in an integer
#include <stdio.h>

int main() {
    int num, count = 0;
    // Input a number
    printf("Enter an integer: ");
    scanf("%d", &num);
    // Handle 0 explicitly
    if (num == 0) count = 1;
    else {
        while (num != 0) {
            num /= 10;
            count++;
        }
    }
    // Output result
    printf("Number of digits = %d\n", count);
    return 0;
}
