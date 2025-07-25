// Program 31: Simple calculator using switch-case
#include <stdio.h>

int main() {
    char op;
    double a, b;
    // Input operator and operands
    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &op);
    printf("Enter two operands: ");
    scanf("%lf %lf", &a, &b);

    // Perform operation
    switch(op) {
        case '+':
            printf("%.2lf + %.2lf = %.2lf\n", a, b, a + b);
            break;
        case '-':
            printf("%.2lf - %.2lf = %.2lf\n", a, b, a - b);
            break;
        case '*':
            printf("%.2lf * %.2lf = %.2lf\n", a, b, a * b);
            break;
        case '/':
            if (b != 0)
                printf("%.2lf / %.2lf = %.2lf\n", a, b, a / b);
            else
                printf("Error: Division by zero.\n");
            break;
        default:
            printf("Invalid operator.\n");
    }
    return 0;
}
