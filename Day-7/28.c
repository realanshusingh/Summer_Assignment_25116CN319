#include<stdio.h>
int reverse_num(int n, int rev);
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("The reverse of %d is: %d\n", n, reverse_num(n, 0));
    return 0;
}
int reverse_num(int n, int rev)
{
    if(n == 0)
    {
        return rev;
    }
    else
    {
        return reverse_num(n / 10, rev * 10 + n % 10);
    }
}