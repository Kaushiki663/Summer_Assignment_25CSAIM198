//Question: Write a program to conert binary to decimal.
int main() {   
    
    int binary, decimal = 0, remainder, place = 1;

    printf("Enter a binary number: ");
    scanf("%d", &binary);

    while (binary != 0) {
        remainder = binary % 10;
        decimal += remainder * place;
        place *= 2;
        binary /= 10;
    }

    printf("Decimal equivalent: %d", decimal);

    return 0;
}