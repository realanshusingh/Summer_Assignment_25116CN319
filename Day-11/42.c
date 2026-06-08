#include<stdio.h>
int max(int a, int b);
int main()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("The maximum of %d and %d is %d\n", a, b, max(a, b));
    return 0;
}
int max(int a, int b)
{
    return (a > b) ? a : b;
}