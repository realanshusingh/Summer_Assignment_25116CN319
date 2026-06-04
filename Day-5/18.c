#include<stdio.h>
int main()
{
    int n,fact=1,sum=0,temp,rem;
    printf("Enter a number: ");
    scanf("%d", &n);
    temp = n;
    while(temp>0)
    {
        rem =temp%10;
        for(int i=1; i<=rem; i++)
        {
            fact = fact * i;
        }
        sum = sum + fact;
        fact = 1;
        temp = temp/10;
    }
    if(sum==n)
    {
        printf("%d is a strong number.", n);
    }
    else
    {
        printf("%d is not a strong number.", n);
    }
}