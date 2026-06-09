#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size of an array: ");
    scanf("%d",&n);
    float arr[n],sum=0,avg;
    printf("Enter %d array elements: \n",n);
    for (int i = 0; i < n; i++)
    {
        printf("arr[%d]= ",i);
        scanf("%f",&arr[i]);
        sum = sum + arr[i];
    }
    avg = sum/n;
    printf("The sum and average of array are: %f and %f\n",sum,avg);
    return 0;
}