#include<stdio.h>
int main()
{
    int n,sum=0,b;
    printf("Enter a number: ");
    scanf("%d", &n);
    while(n!=0)
    {
        b=n%10;
        sum = sum+b;
        n=n/10;
    }
    printf("Sum of digits is %d", sum);
}