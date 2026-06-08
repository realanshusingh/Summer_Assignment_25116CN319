#include<stdio.h>
int factorial(int n);
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("The factorial of %d is %d\n", n, factorial(n));
    return 0;
}
int factorial(int n)
{
    int i, fact = 1;
    for (i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}