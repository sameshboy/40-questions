// Program 37: Structure for storing student information and display it
#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    struct Student s;
    // Input student details
    printf("Enter name: ");
    scanf("%s", s.name);
    printf("Enter roll number: ");
    scanf("%d", &s.roll);
    printf("Enter marks: ");
    scanf("%f", &s.marks);
    // Output student details
    printf("\nStudent Details:\n");
    printf("Name: %s\n", s.name);
    printf("Roll No: %d\n", s.roll);
    printf("Marks: %.2f\n", s.marks);
    return 0;
}
