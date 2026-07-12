//Question: Write a program to Write function to find maximum.

int maximum(int a, int b) {
    if(a > b)
        return a;
    else
        return b;
}

int main() {
    int x, y;

    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    printf("Maximum = %d", maximum(x, y));

    return 0;
}