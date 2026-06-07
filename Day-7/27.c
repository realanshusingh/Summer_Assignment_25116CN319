#include<stdio.h>
int sum_digits(int n);
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("The sum of the digits of %d is: %d\n", n, sum_digits(n));
    return 0;
}
int sum_digits(int n)
{
    if(n == 0)
    {
        return 0;
    }
    else
    {
        return (n % 10) + sum_digits(n / 10);
    }
}
