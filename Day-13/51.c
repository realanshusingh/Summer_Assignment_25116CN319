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


    int largest = arr[0];
    for(int i=0; i<n; i++)
    {
        if(arr[i]>largest)
        {
            largest=arr[i];
        }
    }
    printf("Largest = %d\n",largest);


    int smallest = arr[1];
    for(int i=0; i<n; i++)
    {
        if(arr[i]<smallest)
        {
            smallest=arr[i];
        }
    }
    printf("Smallest = %d\n",smallest);
}