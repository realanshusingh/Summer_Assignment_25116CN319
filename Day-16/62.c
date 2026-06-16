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

    printf("Array : [ ");
    for(i=0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("]\n");

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1]) 
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    int currentfreq=1, maxfreq=1;

    for ( i = 1; i < n; i++)
    {
        if(arr[i] == arr[i-1])
        {
            currentfreq++;
        }
        else 
        {
            if(currentfreq > maxfreq)
            {
                maxfreq = currentfreq;
            }
            currentfreq=1;
        }
    }

    printf("Maximum frequency: %d\n", maxfreq);
    printf("Element(s) with maximum frequency: ");

    currentfreq = 1;
    for (i = 1; i < n; i++) 
    {
        if (i < n && arr[i] == arr[i - 1]) 
        {
            currentfreq++;
        }
        else 
        {
            if (currentfreq == maxfreq)
            {
                printf("%d ", arr[i - 1]);
            }
            currentfreq=1;
        }    
    }
    printf("\n");
}
