//Question:Write a program to Check strong number.

int main() {
    int num, original, remainder, sum = 0, i, fact;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    while (num != 0) {
        remainder = num % 10;
        fact = 1;

        for (i = 1; i <= remainder; i++) {
            fact *= i;
        }

        sum += fact;
        num /= 10;
    }

    if (sum == original)
        printf("%d is a Strong Number.", original);
    else
        printf("%d is not a Strong Number.", original);

    return 0;
}