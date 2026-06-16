#include<stdio.h>
int main()
{
     int n,i;
    printf("Enter number of elements in the array: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter %d array elements(0 to n+1): \n",n);
    for (int i = 0; i < n; i++)
    {
        printf("arr[%d]= ",i);
        scanf("%d",&arr[i]);
    }

    printf("Array : [ ");
    for(i=0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("]\n");

    for (int i = 0; i < n; i++) 
    {
        for (int j = i + 1; j < n; j++) 
        {
            if (arr[i] == arr[j])
            {
                for (int k = j; k < n - 1; k++) 
                {
                    arr[k] = arr[k + 1];
                }
                n--;
                j--;
            }
        }
    }
    
    printf("Array after removing duplicates: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}