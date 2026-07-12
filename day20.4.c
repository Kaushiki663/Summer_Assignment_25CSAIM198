//Question: Write a program to find diagonal sum.
int main() {
    int m, n, c, d, first[10][10], sum = 0;

    printf("Enter the number of rows and columns of matrix\n");
    scanf("%d%d", &m, &n);

    printf("Enter the elements of matrix\n");

    for (c = 0; c < m; c++)
        for (d = 0; d < n; d++)
            scanf("%d", &first[c][d]);

    for (c = 0; c < m; c++)
        for (d = 0; d < n; d++)
            if (c == d)
                sum += first[c][d];

    printf("Sum of diagonal elements of entered matrix:- %d\n", sum);

    return 0;
}