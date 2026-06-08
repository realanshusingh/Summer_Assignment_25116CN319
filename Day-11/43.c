#include<stdio.h>
int prime(int n);
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    prime(n);
    return 0;
}
int prime(int n)
{
    int i;
    if (n <= 1)
        return 0;
    for (i = 2; i <= n/2; i++)
    {
        if (n % i == 0)
            break;
    }
    if (i > n/2)
    {
        printf("%d is a prime number.\n", n);
    }
    else
    {
        printf("%d is not a prime number.\n", n);
    }
    return 0;
}