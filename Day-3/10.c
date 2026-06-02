#include<stdio.h>
int main()
{
    int smaller,larger,i,j;
    printf("Enter smaller number: ");
    scanf("%d", &smaller);
    printf("Enter larger number: ");
    scanf("%d", &larger);
    if(smaller>larger)
    {
        int temp=smaller;
        smaller=larger;
        larger=temp;
    }
    for(i=smaller; i<=larger; i++)
    {
        if(i<2)
        {
            continue;
        }
        for(j=2; j<=i/2; j++)
        {
            if(i%j==0)
            {
                break;
            }
        }if(j>i/2)
        {
            printf("%d ", i);
        }
    }
    return 0;
}