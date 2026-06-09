#include<stdio.h>
int perfect_number (int n);
int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    perfect_number(n);
    return 0;
}
int perfect_number (int n)
{
    int sum=0;
    for (int i=1; i<n; i++)
    {
        if(n%i == 0)
        {
            sum=sum+i;
        }
    }
    if(sum==n)
    {    
        printf("%d is a perfect number.\n",n);
    }
    else
    {
        printf("%d is not a perfect number.\n",n);

    }
}
