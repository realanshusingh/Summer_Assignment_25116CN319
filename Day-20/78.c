#include <stdio.h>
int main() 
{
    int n, i, j;
    int isSymmetric = 1;

    printf("Enter the size of square matrix (n): ");
    scanf("%d", &n);

    int matrix[n][n];
    printf("Enter %d elements of %dx%d matrix:\n", n * n, n, n);
    for (i = 0; i < n; i++) 
    {
        for (j = 0; j < n; j++) 
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

    for (i = 0; i < n && isSymmetric; i++) 
    {
        for (j = 0; j < n; j++) 
        {
            if (matrix[i][j] != matrix[j][i]) 
            {
                isSymmetric = 0;
                break;
            }
        }
    }

    if (isSymmetric)
    {
        printf("\nThe matrix is Symmetric.\n");
    }
    else
    {
        printf("\nThe matrix is NOT Symmetric.\n");
    }
    return 0;
}
