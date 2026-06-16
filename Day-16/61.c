#include <stdio.h>

int main() 
{
    int n, i;
    printf("Enter the value of n (maximum number in the sequence): ");
    scanf("%d", &n);

    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];
    int freq[n + 1];

    for (i = 0; i <= n; i++) 
    {
        freq[i] = 0;
    }

    printf("Enter %d array elements: \n",size);
    for (i = 0; i < size; i++) 
    {
        printf("arr[%d]= ",i);
        scanf("%d", &arr[i]);
        if (arr[i] >= 1 && arr[i] <= n) 
        {
            freq[arr[i]]++;
        }
    }
    printf("Array : [ ");
    for(i=0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("]\n");

    printf("Missing numbers: ");
    int missing_found = 0;
    for (i = 1; i < n; i++) 
    {
        if (freq[i] == 0) 
        {
            printf("%d ", i);
            missing_found = 1;
        }
    }
    if (!missing_found) 
    {
        printf("None");
    }
    printf("\n");

    return 0;
}
