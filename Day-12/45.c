#include<stdio.h>
int pallindrome(int n);
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (pallindrome(n))
        printf("%d is a pallindrome number\n", n);
    else
        printf("%d is not a pallindrome number\n", n);
    return 0;
}
int pallindrome(int n)
{
    int temp, rev = 0, rem;
    temp = n;
    while (temp != 0)
    {
        rem = temp % 10;
        rev = rev * 10 + rem;
        temp /= 10;
    }
    return rev == n;
}