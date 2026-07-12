//Question: Write a program to Find common elements.

int main() {
    int arr1[100], arr2[100];
    int n1, n2, i, j;

    printf("Enter size of first array: ");
    scanf("%d", &n1);

    printf("Enter first array elements:\n");
    for(i = 0; i < n1; i++)
        scanf("%d", &arr1[i]);

    printf("Enter size of second array: ");
    scanf("%d", &n2);

    printf("Enter second array elements:\n");
    for(i = 0; i < n2; i++)
        scanf("%d", &arr2[i]);

    printf("Common elements are:\n");
    for(i = 0; i < n1; i++) {
        for(j = 0; j < n2; j++) {
            if(arr1[i] == arr2[j]) {
                printf("%d ", arr1[i]);
                break;
            }
        }
    }

    return 0;
}