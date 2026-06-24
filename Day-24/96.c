#include <stdio.h>
#include <string.h>

#define MAX_LEN 200
void removeDuplicates(char *str) 
{
    int seen[256] = {0};
    int i, j = 0;
    char result[MAX_LEN];

    for (i = 0; str[i] != '\0'; i++) 
    {
        unsigned char ch = str[i];
        if (!seen[ch]) 
        {
            seen[ch] = 1;
            result[j++] = ch;
        }
    }
    result[j] = '\0';
    strcpy(str, result);
}

int main() 
{
    char str[MAX_LEN];

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

    removeDuplicates(str);

    printf("String after removing duplicates: %s\n", str);

    return 0;
}
