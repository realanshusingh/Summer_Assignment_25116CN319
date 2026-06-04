#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    printf("Factors of %d are: ", n);
    for(int factor=1; factor<=n; factor++)
    {
        if(n%factor==0)
        {
            printf("%d ", factor);
        }
    }
    return 0;
}
    
