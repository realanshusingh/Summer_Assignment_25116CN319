#include <stdio.h>

int main() {
    int n, target, i, j, temp;
    
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d array elements:\n", n);
    for (i = 0; i < n; i++) 
    {
        printf("arr[%d]= ",i);
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++) 
        {
            if (arr[j] > arr[j + 1]) 
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("\nSorted Array : [ ");
    for(i=0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("]\n");

    printf("Enter the target number: ");
    scanf("%d", &target);

    int left = 0, right = n - 1, mid, found = -1;

    while (left <= right) 
    {
        mid = (left + right) / 2;

        if (arr[mid] == target) 
        {
            found = mid;
            break;
        }
        else if (arr[mid] < target)
        {
            left = mid + 1;
        }
        else 
        {
            right = mid - 1;
        }
    }

    if (found != -1)
    {
        printf("Element found at index %d\n", found);
    }
    else
    {
        printf("Element not found\n");
    }
    return 0;
}
