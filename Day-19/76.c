#include <stdio.h>
int main() 
{
    int n;
    printf("Enter the size of the square matrix (n x n): ");
    scanf("%d", &n);

    int matrix[n][n];
    printf("Enter %d elements of the matrix:\n", n * n);
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
             printf("[%d] [%d] = ", i + 1, j + 1 );
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\nMatrix : \n");
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            printf("%d\t",matrix[i][j]);
        }
        printf("\n");
    }

    int primarySum = 0, secondarySum = 0;

    for (int i = 0; i < n; i++) 
    {
        primarySum += matrix[i][i];
        secondarySum += matrix[i][n - i - 1]; 
    }

    printf("Sum of Primary Diagonal: %d\n", primarySum);
    printf("Sum of Secondary Diagonal: %d\n", secondarySum);

    if (n % 2 == 1) 
    {
        secondarySum -= matrix[n / 2][n / 2];
    }

    printf("Total Diagonal Sum (without doubling): %d\n",primarySum + secondarySum);

    return 0;
}
