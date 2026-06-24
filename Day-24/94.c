#include <stdio.h>
#include <string.h>

int main() {
    char str[200], compressed[400];
    int i, j = 0, count;

    printf("Enter a string: ");
    if (!fgets(str, sizeof(str), stdin)) 
    {
        printf("Error reading input.\n");
        return 1;
    }

    str[strcspn(str, "\n")] = '\0';

    for (i = 0; str[i] != '\0'; i++) 
    {
        compressed[j++] = str[i];
        count = 1;

        while (str[i] == str[i + 1]) 
        {
            count++;
            i++;
        }

        if (count > 1) 
        {
            j += sprintf(&compressed[j], "%d", count);
        }
    }

    compressed[j] = '\0'; 

    printf("Compressed string: %s\n", compressed);
    return 0;
}
