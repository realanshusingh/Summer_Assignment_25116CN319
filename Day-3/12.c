#include<stdio.h>
int gcd(int a, int b);

int main()
{
    int a,b;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");    
    scanf("%d", &b);
    printf("LCM is: %d", (a*b)/gcd(a,b));
    return 0;
}
int gcd(int a, int b)
{
    if(b==0)
    {
        return a;
    }
    return gcd(b, a%b);
}