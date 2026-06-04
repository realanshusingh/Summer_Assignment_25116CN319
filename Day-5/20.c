#include <stdio.h>

int main() {
    int n, factor, largest = 0;

    printf("Enter the number: ");
    if (scanf("%d", &n) != 1 || n <= 1)
    {
        printf("Invalid input. Please enter an integer greater than 1.\n");
        return 1; 
    }
    printf("The prime factors of %d are: ", n);
    for (factor = 2; factor <= n; factor++) 
    {
        while (n % factor == 0) 
        {
            largest = factor;
            n = n / factor;
            printf("%d ", factor);

        }
    }
    printf("\nThe largest prime factor is: %d", largest);
    return 0;
}
