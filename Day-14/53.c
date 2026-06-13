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

    int target, found = -1, i;
    printf("Enter target element : ");
    scanf("%d",&target);

    for(i = 0; i < n; i++)
    {
        if(arr[i]==target)
        {
            found = i;
            break;
        }
    }

    if(found==i)
    {
        printf("\nThe element %d found at index %d",target,found);
    }
    else
    {
        printf("\nTarget(%d) Not found",target);
    }
}