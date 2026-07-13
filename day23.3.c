//Question: Write a program to Check anagram strings.
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str1[100], str2[100];
    int frequency[256] = {0};
    int i;

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    // Convert strings to lowercase and count frequency of each character
    for (i = 0; str1[i] != '\0' && str1[i] != '\n'; i++) {
        str1[i] = tolower(str1[i]);
        frequency[(int)str1[i]]++;
    }

    for (i = 0; str2[i] != '\0' && str2[i] != '\n'; i++) {
        str2[i] = tolower(str2[i]);
        frequency[(int)str2[i]]--;
    }

    // Check if all frequencies are zero
    for (i = 0; i < 256; i++) {
        if (frequency[i] != 0) {
            printf("Strings are not anagrams.\n");
            return 0;
        }
    }

    printf("Strings are anagrams.\n");

    return 0;
}