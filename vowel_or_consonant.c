// Program 14: Check whether a character is a vowel or consonant
#include <stdio.h>

int main() {
    char ch;
    // Input character
    printf("Enter a character: ");
    scanf(" %c", &ch);
    // Check for vowel or consonant
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        printf("%c is a vowel.\n", ch);
    else
        printf("%c is a consonant.\n", ch);
    return 0;
}
