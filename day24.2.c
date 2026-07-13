//Question: Write a program to Check string rotation.
#include <stdio.h>

int main() {
    char str1[100], str2[100], temp[200];
    int i, j, len1 = 0, len2 = 0, found = 0;

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    while (str1[len1] != '\0') len1++;
    while (str2[len2] != '\0') len2++;

    if (len1 != len2) {
        printf("Not Rotation");
        return 0;
    }

    for (i = 0; i < len1; i++)
        temp[i] = str1[i];

    for (i = 0; i < len1; i++)
        temp[len1 + i] = str1[i];

    temp[2 * len1] = '\0';

    for (i = 0; i <= len1; i++) {
        for (j = 0; j < len2; j++) {
            if (temp[i + j] != str2[j])
                break;
        }
        if (j == len2) {
            found = 1;
            break;
        }
    }

    if (found)
        printf("Strings are Rotations");
    else
        printf("Strings are Not Rotations");

    return 0;
}