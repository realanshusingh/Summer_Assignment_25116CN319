#include <stdio.h>
int main() 
{
   int r, c;
   int a[100][100], b[100][100], sum[100][100];
   printf("Enter number of rows (1-100): ");
   scanf("%d", &r);
   printf("Enter number of columns (1-100): ");
   scanf("%d", &c);

   printf("\nEnter elements of first matrix:\n");
   for (int i = 0; i < r; i++) 
   {
       for (int j = 0; j < c; j++) 
       {
           printf("a[%d][%d]: ", i+1, j+1);
           scanf("%d", &a[i][j]);
       }
   }
   printf("\n");

   printf("\nEnter elements of second matrix:\n");
   for (int i = 0; i < r; i++) 
   {
       for (int j = 0; j < c; j++) 
       {
           printf("b[%d][%d]: ", i+1, j+1);
           scanf("%d", &b[i][j]);
       }
   }

    printf("\nMatrix A: \n");
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }

    printf("\nMatrix B: \n");
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < r; i++) 
   {
        for (int j = 0; j < c; j++) 
       {
           sum[i][j] = a[i][j] + b[i][j];
       }
   }

    printf("\nSum of two matrices:\n");
    for (int i = 0; i < r; i++) 
   {
       for (int j = 0; j < c; j++) 
       {
           printf("%d\t", sum[i][j]);
       }
       printf("\n");
   }
    return 0;
}