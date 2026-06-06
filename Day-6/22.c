#include<stdio.h>
int main()
{
    int n, decimal=0, base=1, rem;
    printf("Enter a binary number (0s and 1s only): ");
    scanf("%d", &n);
    while(n > 0)
    {
        rem = n % 10;
        decimal = decimal + rem * base;
        n = n / 10;
        base = base * 2;
    }
    printf("The decimal number is: %d", decimal);
}