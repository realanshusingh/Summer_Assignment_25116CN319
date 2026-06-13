#include <stdio.h>
int main()
{
    int n, i, element, count = 0;
    printf("Enter number of elements in the array: ");
    scanf("%d", &n);
    

    int arr[n];
    printf("Enter %d array elements: \n",n);
    for (int i = 0; i < n; i++)
    {
        printf("arr[%d]= ",i);
        scanf("%d",&arr[i]);
    }

    printf("Enter the element to find its duplicate: ");
    scanf("%d", &element);

    for (i = 0; i < n; i++)
    {
        if (arr[i] == element)
        {
            count++;
        }
    }
    if(count>1)
    {
        printf("\nDuplicate of %d is found\n",element);
    }
    else
    {
        printf("\nDuplicate of %d is not found\n",element);
    }
}