#include<stdio.h>
int armstrong(int n);
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (armstrong(n))
        printf("%d is an armstrong number\n", n);
    else
        printf("%d is not an armstrong number\n", n);
    return 0;
}
int armstrong(int n)
{
    int temp, sum = 0, rem;
    temp = n;
    while (temp != 0)
    {
        rem = temp % 10;
        sum += rem * rem * rem;
        temp /= 10;
    }
    return sum == n;
}