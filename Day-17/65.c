#include<stdio.h>
int main()
{
    int n,m,i,j;
    printf("Enter size of 1st array : ");
    scanf("%d",&n);
    int arr1[n];

    printf("Enter %d elements of 1st array:\n",n);
    for(i=0; i<n; i++)
    {
        printf("arr[%d]: ",i);
        scanf("%d",&arr1[i]);
    }
    
    printf("Enter size of 2nd array : ");
    scanf("%d",&m);
    int arr2[m];

    printf("Enter %d elements of 2nd array:\n",m);
    for(i=0; i<m; i++)
    {
        printf("arr[%d]: ",i);
        scanf("%d",&arr2[i]);
    }

    printf("\n1st Array : [ ");
    for(i=0; i<n; i++)
    {
        printf("%d ",arr1[i]);
    }
    printf("]\n");

    printf("\n2nd Array : [ ");
    for(i=0; i<m; i++)
    {
        printf("%d ",arr2[i]);
    }
    printf("]\n");
    
    printf("\nMerged array: [ ");
    for ( i = 0; i < n; i++)
    {
        printf("%d ",arr1[i]);
    }
    for ( i = 0; i < m; i++)
    {
        printf("%d ",arr2[i]);
    }
    printf("]");
}