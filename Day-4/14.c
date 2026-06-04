#include<stdio.h>
int main()
{
    int n,fib=0,sib=1,i;
    printf("Enter the number: ");
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        int next = fib + sib;
        fib = sib;
        sib = next;
    }
    printf("The %dth Fibonacci number is: %d", n, fib);
    return 0;
}