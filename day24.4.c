//Question: Write a program to Remove duplicate characters.

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0; // Remove newline character

    int len = strlen(str);
    for (int i = 0; i < len; i++) {
        for (int j = i + 1; j < len; j++) {
            if (str[i] == str[j]) {
                for (int k = j; k < len - 1; k++) {
                    str[k] = str[k + 1];
                }
                len--;
                j--;
            }
        }
    }

    printf("String after removing duplicates: %s\n", str);
    return 0;
}