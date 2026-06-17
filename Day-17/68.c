#include <stdio.h>

int main() 
{
    int n, m;
    int i, j, k = 0;

    printf("Enter size of 1st array: ");
    scanf("%d", &n); 
    int arr1[n];

    printf("Enter %d elements of 1st array:\n", n);
    for (i = 0; i < n; i++) 
    {
        printf("arr[%d]: ",i);
        scanf("%d", &arr1[i]);
    }

    printf("Enter size of 2nd array: ");
    scanf("%d", &m);
    int arr2[m];

    printf("Enter %d elements of 2nd array:\n", m);
    for (i = 0; i < m; i++) 
    {
        printf("arr[%d]: ",i);
        scanf("%d", &arr2[i]);
    }

    printf("\n1st Array : [ ");
    for(i=0; i<n; i++)
    {
        printf("%d ",arr1[i]);
    }
    printf("]\n");

    printf("\n2nd Array : [ ");
    for(i=0; i<m; i++)
    {
        printf("%d ",arr2[i]);
    }
    printf("]\n");

    int common[n+m];
    for (i = 0; i < n; i++) 
    {
        for (j = 0; j < m; j++) 
        {
            if (arr1[i] == arr2[j]) 
            {
                int alreadyExists = 0;
                for (int m = 0; m < k; m++) 
                {
                    if (common[m] == arr1[i]) 
                    {
                        alreadyExists = 1;
                        break;
                    }
                }
                if (!alreadyExists) 
                {
                    common[k++] = arr1[i];
                }
                break;
            }
        }
    }

    if (k == 0) 
    {
        printf("No common elements.\n");
    } 
    else 
    {
        printf("\nCommon elements:  ");
        for (i = 0; i < k; i++) 
        {
            printf("%d ", common[i]);
        }
        printf("\n");
    }

    return 0;
}
