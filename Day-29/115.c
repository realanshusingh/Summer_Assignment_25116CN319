#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], result[200];
    int choice;

    do {
        printf("\n--- String Menu ---\n");
        printf("1. Length of String\n");
        printf("2. Copy String\n");
        printf("3. Combined Strings\n");
        printf("4. Compare Strings\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: // Length
                printf("Enter a string: ");
                scanf(" %[^\n]", str1);
                printf("\nLength = %d\n", (int)strlen(str1));
                break;

            case 2: // Copy
                printf("Enter a string: ");
                scanf(" %[^\n]", str1);
                strcpy(str2, str1);
                printf("\nCopied string = %s\n", str2);
                break;

            case 3: // Concatenate
                printf("Enter first string: ");
                scanf(" %[^\n]", str1);
                printf("Enter second string: ");
                scanf(" %[^\n]", str2);
                strcpy(result, str1);
                strcat(result, str2);
                printf("\nnCombined string = %s\n", result);
                break;

            case 4: // Compare
                printf("Enter first string: ");
                scanf(" %[^\n]", str1);
                printf("Enter second string: ");
                scanf(" %[^\n]", str2);
                if (strcmp(str1, str2) == 0)
                    printf("\nnStrings are equal.\n");
                else
                    printf("\nStrings are not equal.\n");
                break;

            case 5: // Exit
                printf("\nExiting...\n");
                break;

            default:
                printf("\nInvalid choice! Try again.\n");
        }
    } while (choice != 5);

    return 0;
}
