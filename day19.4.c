//Question: Write a program to find column wise sum.

int main() {
    int arr[10][10], i, j, n, sum;

    printf("Enter the order of the matrix: ");
    scanf("%d", &n);

    printf("Enter the elements of the matrix:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    // Find column-wise sum
    printf("Column-wise sums:\n");
    for(j = 0; j < n; j++) {
        sum = 0;
        for(i = 0; i < n; i++) {
            sum += arr[i][j];
        }
        printf("Sum of column %d: %d\n", j + 1, sum);
    }

    return 0;
}