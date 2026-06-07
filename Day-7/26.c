#include<stdio.h>   
int fib(int n);
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("The fibonacci sequence up to %d is: ", n);
    for(int i = 0; i < n; i++)
    {
        printf("%d ", fib(i));
    }
    printf("\nThe %dth Fibonacci number is: %d", n, fib(n));
    return 0;
}
int fib(int n)
{
    if(n == 0)
    {
        return 0;
    }
    else if(n == 1)
    {
        return 1;
    }
    else
    {
        return fib(n - 1) + fib(n - 2);
    }
}