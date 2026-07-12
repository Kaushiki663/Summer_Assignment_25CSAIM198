//Question: Write a program to check symmetric matrix.

int main() {
    int arr[10][10], i, j, n, isSymmetric = 1;

    printf("Enter the order of the matrix: ");
    scanf("%d", &n);

    printf("Enter the elements of the matrix:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    // Check if the matrix is symmetric
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            if(arr[i][j] != arr[j][i]) {
                isSymmetric = 0;
                break;
            }
        }
        if(!isSymmetric) {
            break;
        }
    }

    if(isSymmetric) {
        printf("The matrix is symmetric.\n");
    } else {
        printf("The matrix is not symmetric.\n");
    }

    return 0;
}