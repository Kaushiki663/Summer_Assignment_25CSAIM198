//Question:Write a program to print Armstrong numbers in a given range.

int main() {
    int start, end, num, original, remainder, result;

    printf("Enter starting number: ");
    scanf("%d", &start);

    printf("Enter ending number: ");
    scanf("%d", &end);

    printf("Armstrong numbers are:\n");

    for (num = start; num <= end; num++) {
        original = num;
        result = 0;

        while (original != 0) {
            remainder = original % 10;
            result = result + (remainder * remainder * remainder);
            original = original / 10;
        }

        if (result == num)
            printf("%d ", num);
    }

    return 0;
}