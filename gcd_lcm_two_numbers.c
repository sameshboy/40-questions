// Program 16: Find the GCD and LCM of two numbers
#include <stdio.h>

int main() {
    int a, b, gcd, lcm, temp_a, temp_b;
    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    temp_a = a;
    temp_b = b;
    // Calculate GCD using Euclidean algorithm
    while (temp_b != 0) {
        int temp = temp_b;
        temp_b = temp_a % temp_b;
        temp_a = temp;
    }
    gcd = temp_a;
    lcm = (a * b) / gcd; // LCM formula
    // Output results
    printf("GCD = %d\n", gcd);
    printf("LCM = %d\n", lcm);
    return 0;
}
