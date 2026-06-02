#include<stdio.h>
int main()
{
    int n,product=1,temp;
    printf("Enter a number: ");
    scanf("%d", &n);
    temp = n;
    while(n!=0)
    {
        product *= n%10;
        n /= 10;
    }
    printf("Product of digits of %d is %d\n", temp, product);
}