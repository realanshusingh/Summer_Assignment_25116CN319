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
    printf("Array : [");
    for(i=0; i<n; i++)
    {
    printf("%d ",arr[i]);
    }
    printf("]\n");

    printf("Reversed array are : [");
    for(int i=n-1; i>=0; i--)
    {
        printf("%d ",arr[i]);
    }
    printf("]");
}