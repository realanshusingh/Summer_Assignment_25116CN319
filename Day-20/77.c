#include <stdio.h>
int main() 
{
    int r1, c1, r2, c2;
    int i, j, k;

    printf("Enter rows and columns of 1st matrix:\n");
    scanf("%d %d", &r1, &c1);

    printf("Enter rows and columns of 2nd matrix:\n");
    scanf("%d %d", &r2, &c2);

    if (c1 != r2) 
    {
        printf("Matrix multiplication not possible. Columns of 1st must equal rows of 2nd.\n");
        return 1;
    }

    int A[r1][c1], B[r2][c2], C[r1][c2];

    printf("Enter %d elements of 1st matrix:\n", r1 * c1);
    for (i = 0; i < r1; i++) 
    {
        for (j = 0; j < c1; j++)
        {
            printf("[%d] [%d] = ", i + 1, j + 1 );
            scanf("%d", &A[i][j]);
        }
    }

    printf("Enter %d elements of 2nd matrix:\n", r2 * c2);
    for (i = 0; i < r2; i++) 
    {
        for (j = 0; j < c2; j++) 
        {
            printf("[%d] [%d] = ", i + 1, j + 1 );
            scanf("%d", &B[i][j]);
        }
    }

    printf("\nMatrix A: \n");
    for(int i = 0; i < r1; i++)
    {
        for(int j = 0; j < c1; j++)
        {
            printf("%d\t",A[i][j]);
        }
        printf("\n");
    }

    printf("\nMatrix B: \n");
    for(int i = 0; i < r2; i++)
    {
        for(int j = 0; j < c2; j++)
        {
            printf("%d\t",B[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < r1; i++) 
    {
        for (j = 0; j < c2; j++) 
        {
            C[i][j] = 0;
        }
    }

    for (i = 0; i < r1; i++) 
    {
        for (j = 0; j < c2; j++) 
        {
            for (k = 0; k < c1; k++) 
            {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    printf("\nResultant matrix:\n");
    for (i = 0; i < r1; i++) 
    {
        for (j = 0; j < c2; j++) 
        {
            printf("%d\t", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
