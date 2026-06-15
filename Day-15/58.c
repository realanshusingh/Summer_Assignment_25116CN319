#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter number of elements in the array: ");
    scanf("%d", &n);
    

    int arr[n];
    printf("Enter %d array elements: \n",n);
    for (int i = 0; i < n; i++)
    {
        printf("arr[%d]= ",i);
        scanf("%d",&arr[i]);
    }
    printf("Array : [");
    for(i=0; i<n; i++)
    {
    printf("%d ",arr[i]);
    }
    printf("]\n");

    int r,j=0;
    int temp[n];
    printf("Rotate array left by : ");
    scanf("%d",&r);
    r = r % n;

    for(i=r; i<n; i++)
    {
        temp[j] = arr[i];
        j++;
    }
    
    for(i=0; i<r; i++)
    {
        temp[j] = arr[i];
        j++;
    }

    printf("\nRotated array are : [");
    for(i=0; i<n; i++)
    {
        printf("%d ",temp[i]);
    }
    printf("]");
}