#include <stdio.h>

int main() 
{
    int n, m, i;
    printf("Enter size of 1st array: ");
    scanf("%d", &n);
    int arr1[n];
    printf("Enter %d elements of 1st array: \n", n);
    for ( i = 0; i < n; i++) 
    {
        printf("arr[%d]: ",i);
        scanf("%d", &arr1[i]);
    }

    printf("Enter size of 2nd array: ");
    scanf("%d", &m);
    int arr2[m];
    printf("Enter %d elements of 2nd array: \n", m);
    for ( i = 0; i < m; i++) 
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

    int unionArr[n + m];
    int unionSize = 0;

    for (int i = 0; i < n; i++) 
    {
        int found = 0;
        for (int k = 0; k < unionSize; k++) 
        {
            if (unionArr[k] == arr1[i]) 
            {
                found = 1;
                break;
            }
        }
        if (!found) 
        {
            unionArr[unionSize++] = arr1[i];
        }
    }

    for (int i = 0; i < m; i++) 
    {
        int found = 0;
        for (int k = 0; k < unionSize; k++)
        {
            if (unionArr[k] == arr2[i]) 
            {
                found = 1;
                break;
            }
        }
        if (!found) 
        {
            unionArr[unionSize++] = arr2[i];
        }
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (unionArr[j] > unionArr[j + 1]) 
            {
                int temp = unionArr[j];
                unionArr[j] = unionArr[j + 1];
                unionArr[j + 1] = temp;
            }
        }
    }

    printf("Union of arrays: [ ");
    for (int i = 0; i < unionSize; i++) 
    {
        printf("%d ", unionArr[i]);
    }
    printf("]\n");

    return 0;
}
