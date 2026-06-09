#include<stdio.h>
int fibonacci(int n);
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("The %dth term of the Fibonacci series is %d\n", n, fibonacci(n));
    return 0;
}
int fibonacci(int n)
{
    int a=0, b=1, c;
    if (n==0)
    {
        printf("%d \n", a);
        return 0;
    }
    else if (n==1)
    {
        printf("%d %d\n",a,b);
        return 1;
    }
    else
    {
        printf("%d %d ",a,b);
        for (int i = 2; i <= n; i++)
        {
            c = a + b;
            a = b;
            b = c;
            printf("%d ", c);
        }
        printf("\n");
        return c;
    }
}