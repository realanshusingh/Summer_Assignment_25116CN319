#include<stdio.h>
int main()
{
    int n,i,j,temp,minIndex;
    printf("Enter the size of an array: ");
    scanf("%d",&n);
    
    int arr[n];
    printf("Enter %d array elements: \n",n);
    for (int i = 0; i < n; i++)
    {
        printf("arr[%d]= ",i);
        scanf("%d",&arr[i]);
    }
    printf("\nArray : [ ");
    for(i=0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("]\n");

     for (i = 0; i < n - 1; i++)
    {
        minIndex = i; // assume current is smallest

        for (j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j; // found smaller element
            }
        }
        temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }

    printf("Sorted array: [ ");
    for (i = 0; i < n; i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("]\n");

    return 0;

}