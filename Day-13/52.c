#include<stdio.h>
int main()
{
    int n,even=0,odd=0;
    printf("Enter the size of an array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d array elements: \n",n);


    for (int i = 0; i < n; i++)
    {
        printf("arr[%d]= ",i);
        scanf("%d",&arr[i]);
    }


    int i;
    printf("Even elements: ");
    for (i = 0; i < n; i++)
    {
        if(arr[i]%2 == 0)
        {
            even++;
            printf("%d ",arr[i]);
        }
    }
    printf("\n");
    

    printf("Odd elements: ");
    for (int i = 0; i < n; i++)
    {
        if(arr[i]%2 != 0)
        {
            odd++;
            printf("%d ",arr[i]);
        }
    }
    printf("\n");


    printf("Number of even elements are: %d\n",even);
    printf("Number of odd elements are: %d\n",odd);
    
}