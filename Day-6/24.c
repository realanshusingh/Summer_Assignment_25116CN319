#include<stdio.h>
int main()
{
    int n, product = 1, x;
    printf("Enter a number x: ");
    scanf("%d", &x);
    printf("Enter its power n: ");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++)
    {
        product *= x;
    }
    printf("The result x to the power n is: %d", product);
    return 0;
}