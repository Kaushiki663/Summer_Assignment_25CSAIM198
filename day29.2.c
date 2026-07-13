//Question: Write a program to create menu driven string operation system.

int main() {
    char str1[100], str2[100];
    int choice;

    printf("Menu Driven String Operation System\n");
    printf("1. Concatenate Strings\n");
    printf("2. Find Length of String\n");
    printf("3. Compare Strings\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter first string: ");
            scanf("%s", str1);
            printf("Enter second string: ");
            scanf("%s", str2);
            strcat(str1, str2);
            printf("Result: %s\n", str1);
            break;
        case 2:
            printf("Enter a string: ");
            scanf("%s", str1);
            printf("Length of string: %lu\n", strlen(str1));
            break;
        case 3:
            printf("Enter first string: ");
            scanf("%s", str1);
            printf("Enter second string: ");
            scanf("%s", str2);
            if (strcmp(str1, str2) == 0) {
                printf("Strings are equal.\n");
            } else {
                printf("Strings are not equal.\n");
            }
            break;
        default:
            printf("Invalid choice. Please try again.\n");
    }

    return 0;
}