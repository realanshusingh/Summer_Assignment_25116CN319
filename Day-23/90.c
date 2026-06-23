#include <stdio.h>
#include <string.h>
int main()
{
    char str[101]; // Max length 100 + 1 for null terminator
    int i, j;
    int found = 0;

    printf("Enter a string: ");
    if (fgets(str, sizeof(str), stdin) == NULL) 
    {
        printf("Error reading input.\n");
        return 1;
    }

    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') 
    {
        str[len - 1] = '\0';
    }

    for (i = 0; str[i] != '\0'; i++) 
    {
        for (j = i + 1; str[j] != '\0'; j++) 
        {
            if (str[i] == str[j]) 
            {
                printf("First repeating character: '%c'\n", str[i]);
                found = 1;
                break;
            }
        }
        if (found) break;
    }

    if (!found) 
    {
        printf("No repeating characters found.\n");
    }

    return 0;
}
