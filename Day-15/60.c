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

    int temp[n],j=0;
    for(i=0; i<n; i++)
    {
        if(arr[i] != 0)
        {
            temp[j] = arr[i];
            j++;
        }
    }
    while(j<n)
    {
        temp[j] = 0;
        j++;
    }

    printf("\nModified array is : [");
    for(i=0; i<n; i++)
    {
        printf("%d ",temp[i]);
    }
    printf("]");
}