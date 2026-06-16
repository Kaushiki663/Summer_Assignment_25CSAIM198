// Question: Write a program to count digits in a number.
#include <stdio.h>
int main() {
    int number, count = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    // Handle the case when the number is 0
    if (number == 0) {
        count = 1;
    } else {
        // Count digits in the number
        while (number != 0) {
            number /= 10; // Remove the last digit
            count++;      // Increment the count
        }
    }

    printf("Number of digits: %d\n", count);
    return 0;
}
