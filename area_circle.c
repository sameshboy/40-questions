// Program 3: Calculate the area of a circle given its radius
#include <stdio.h>
#define PI 3.1416

int main() {
    float radius, area;
    // Input the radius
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    // Calculate the area
    area = PI * radius * radius;
    // Print the area
    printf("Area of the circle = %.2f\n", area);
    return 0;
}
