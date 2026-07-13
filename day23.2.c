//Question: Write a program to Find first non-repeating character.
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int frequency[256] = {0};
    int i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Count frequency of each character
    for (i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        frequency[(int)str[i]]++;
    }

    // Find first non-repeating character
    for (i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        if (frequency[(int)str[i]] == 1) {
            printf("First non-repeating character is: %c\n", str[i]);
            return 0;
        }
    }

    printf("No non-repeating character found.\n");

    return 0;
}