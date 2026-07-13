//Question: Write a program to Character frequency.
#include <stdio.h>

int main() {
    char str[100];
    int i = 0;
    int frequency[256] = {0}; // Array to store frequency of each character

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0' && str[i] != '\n') {
        frequency[(int)str[i]]++;
        i++;
    }

    printf("Character frequency:\n");
    for (int j = 0; j < 256; j++) {
        if (frequency[j] > 0) {
            printf("'%c': %d\n", j, frequency[j]);
        }
    }

    return 0;
}