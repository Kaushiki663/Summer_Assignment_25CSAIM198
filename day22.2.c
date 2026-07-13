//Question: Write a program to Count words in a sentence.
#include <stdio.h>

int main() {
    char str[100];
    int i = 0, words = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0' && str[i] != '\n') {
        if (str[i] == ' ' || str[i] == '\t') {
            words++;
        }
        i++;
    }
    words++; // Increment for the last word

    printf("Number of words in the sentence: %d\n", words);

    return 0;
}