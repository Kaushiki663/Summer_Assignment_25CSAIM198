// Question: Write a program to check whether a given number is prime or not.
#include <stdio.h>
#include <conio.h>
int main()
{
    int n, i, temp = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    for(i = 2; i <= n/2; ++i)
    {
        if(n % i == 0)
        {
            temp = 1;
            break;
        }
    }
    if(temp == 0)
        printf("%d is a prime number.", n);
    else
        printf("%d is not a prime number.", n);
}