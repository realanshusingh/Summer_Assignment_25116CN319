#include<stdio.h>
int main()
{
    int a,b,r;
    printf("Enter lower number: ");
    scanf("%d", &a);
    printf("Enter upper number: ");
    scanf("%d", &b);
    if(a>b)
    {
        int temp=a;
        a=b;
        b=temp;
    }
    printf("Armstrong numbers between %d and %d are: ", a, b);
    for(int i=a; i<=b; i++)
    {
        int temp = i, arm = 0;
        while(temp>0)
        {
            r = temp%10;
            arm = arm + (r*r*r);
            temp = temp/10;
        }
        if(arm==i)
        {
            printf("%d ", i);
        }
    }
    return 0;
}