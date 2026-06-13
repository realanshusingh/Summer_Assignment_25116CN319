#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size of an array: ");
    scanf("%d",&n);
    
    int arr[n];
    printf("Enter %d array elements: \n",n);
    for (int i = 0; i < n; i++)
    {
        printf("arr[%d]= ",i);
        scanf("%d",&arr[i]);
    }

    int largest=arr[0];
    for(int i=0; i < n; i++)
    {
        if(arr[i]>largest)
        {
            largest=arr[i];
        }
    }

    int second_largest=arr[1], j;
    for(j=0; j < n; j++)
    {
        if(arr[j]>second_largest && arr[j]!=largest)
        {
            second_largest=arr[j];
        }
    }
    printf("\nSecond largest element is %d",second_largest);
    return 0;
}