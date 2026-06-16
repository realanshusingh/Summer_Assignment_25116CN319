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

    int sum,j,found = 0;
    printf("Enter the target sum : ");
    scanf("%d",&sum);

    for(i = 0; i < n - 1; i++)
    {
        for (j = 1; j < n; j++)
        {
            if(arr[i] + arr[j] == sum)
            {
                printf("Pair found: (%d, %d)\n",arr[i], arr[j]);
                found = 1;
            }   
        }
    }
    if(found==0)
    {
        printf("No pair found with this target sum.");
    }
}