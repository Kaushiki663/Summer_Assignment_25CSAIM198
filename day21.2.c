//Question: Write a program to Reverse a string.
#include <stdio.h>

int main()
{
    char str[100];
    int length = 0;
    char temp;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[length] != '\0' && str[length] != '\n')
    {
        length++;
    }

    for (int i = 0, j = length - 1; i < j; i++, j--)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }

    printf("Reversed string: %s\n", str);

    return 0;
}