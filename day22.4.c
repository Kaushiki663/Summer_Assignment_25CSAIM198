//Question: Write a program to Remove spaces from string.
#include <stdio.h>
int main() {
    char str[100], result[100];
    int i = 0, j = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0' && str[i] != '\n') {
        if (str[i] != ' ') {
            result[j++] = str[i];
        }
        i++;
    }
    result[j] = '\0'; // Null-terminate the result string

    printf("String after removing spaces: %s\n", result);

    return 0;
}