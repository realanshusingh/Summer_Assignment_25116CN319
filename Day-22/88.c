#include <stdio.h>
#include <string.h>

int main() {
    char str[200], result[200];
    int i, j = 0;

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
        if (str[i] != ' ') 
        {
            result[j++] = str[i];
        }
    }
    result[j] = '\0';
    printf("String without spaces: %s\n", result);

    return 0;
}
