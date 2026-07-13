//Question: Write a program to create menu diven array operations system.
int main() {
    int arr[100], n, i, choice, sum = 0;
    float average;

    printf("Menu Driven Array Operations System\n");
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("1. Calculate Sum\n");
    printf("2. Calculate Average\n");
    printf("3. Find Maximum Element\n");
    printf("4. Find Minimum Element\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            for (i = 0; i < n; i++) {
                sum += arr[i];
            }
            printf("Sum of array elements: %d\n", sum);
            break;
        case 2:
            for (i = 0; i < n; i++) {
                sum += arr[i];
            }
            average = (float)sum / n;
            printf("Average of array elements: %.2f\n", average);
            break;
        case 3:
            int max = arr[0];
            for (i = 1; i < n; i++) {
                if (arr[i] > max) {
                    max = arr[i];
                }
            }
            printf("Maximum element in the array: %d\n", max);
            break;
        case 4:
            int min = arr[0];
            for (i = 1; i < n; i++) {
                if (arr[i] < min) {
                    min = arr[i];
                }
            }
            printf("Minimum element in the array: %d\n", min);
            break;
        default:
            printf("Invalid choice. Please try again.\n");
    }

    return 0;
}