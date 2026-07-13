//Question: Write a program to Find maximum occurring character.
#include <stdio.h>
int main() {    
    char str[100];
    int frequency[256] = {0};
    int i, max = 0;
    char maxChar;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Count frequency of each character
    for (i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        frequency[(int)str[i]]++;
    }

    // Find maximum occurring character
    for (i = 0; i < 256; i++) {
        if (frequency[i] > max) {
            max = frequency[i];
            maxChar = (char)i;
        }
    }

    if (max > 0) {
        printf("Maximum occurring character is: %c\n", maxChar);
    } else {
        printf("No characters found in the string.\n");
    }

    return 0;
}