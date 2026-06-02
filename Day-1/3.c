#include<stdio.h>
int main()
{
    double n,fact=1;
    printf("Enter a number: "); 
    scanf("%lf", &n);
    for(int i=1; i<=n; i++)
    {
        fact *= i;
    }
    printf("Factorial of %lf is %lf\n", n, fact);
    return 0;
}