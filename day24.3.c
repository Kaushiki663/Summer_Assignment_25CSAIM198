//Question: Write a program to Find longest word.
#include <stdio.h>
#include <string.h>

int main() {
    char str[200], longest[100];
    int i = 0, j = 0, max = 0, start = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') {
        if (str[i] != ' ' && str[i] != '\n') {
            j++;
        } else {
            if (j > max) {
                max = j;
                int k;
                for (k = 0; k < max; k++)
                    longest[k] = str[start + k];
                longest[max] = '\0';
            }
            j = 0;
            start = i + 1;
        }
        i++;
    }

    if (j > max) {
        max = j;
        int k;
        for (k = 0; k < max; k++)
            longest[k] = str[start + k];
        longest[max] = '\0';
    }

    printf("Longest word: %s", longest);

    return 0;
}