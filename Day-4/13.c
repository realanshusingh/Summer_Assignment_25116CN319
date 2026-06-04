#include<stdio.h>
int main()
{
    int fib=0,sib=1,n,i;
    printf("Enter the number of terms: ");  
    scanf("%d", &n);
    printf("Fibonacci Series: ");
    for(i=1; i<=n; i++)
    {
        printf("%d ", fib);
        int next = fib + sib;
        fib = sib;
        sib = next;
    }
    return 0;
}