//Question: Write a program to recursive reverse of a number.
int reverseNumber(int n, int rev) {
    if (n == 0)
        return rev;
    else
        return reverseNumber(n / 10, rev * 10 + n % 10);
}
    