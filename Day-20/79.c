#include <stdio.h>
int main() {
    int rows, cols;
    printf("Enter number of rows and columns:\n");
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols];
    printf("Enter %d matrix elements:\n",rows * cols);
    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++) 
        {
            printf("[%d][%d] = ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\nMatrix : \n");
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            printf("%d\t",matrix[i][j]);
        }
        printf("\n");
    }

    printf("\nRow-wise sums:\n");
    for (int i = 0; i < rows; i++) 
    {
        int sum = 0;
        for (int j = 0; j < cols; j++) 
        {
            sum += matrix[i][j];
        }
        printf("Sum of row %d = %d\n", i + 1, sum);
    }
    return 0;
}
