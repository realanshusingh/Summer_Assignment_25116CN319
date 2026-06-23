#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str1[100], str2[100];
    int count1[256] = {0}, count2[256] = {0}; // Frequency arrays for ASCII chars
    int i;

    printf("Enter first string: ");
    if (fgets(str1, sizeof(str1), stdin) == NULL) 
    {
        printf("Error reading first string.\n");
        return 1;
    }
    printf("Enter second string: ");
    if (fgets(str2, sizeof(str2), stdin) == NULL) 
    {
        printf("Error reading second string.\n");
        return 1;
    }

    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';

    for (i = 0; str1[i] != '\0'; i++) 
    {
        if (!isspace((unsigned char)str1[i])) 
        {
            count1[(unsigned char)tolower(str1[i])]++;
        }
    }
    for (i = 0; str2[i] != '\0'; i++) 
    {
        if (!isspace((unsigned char)str2[i])) 
        {
            count2[(unsigned char)tolower(str2[i])]++;
        }
    }

    for (i = 0; i < 256; i++) 
    {
        if (count1[i] != count2[i]) 
        {
            printf("The strings are NOT anagrams.\n");
            return 0;
        }
    }

    printf("The strings are ANAGRAMS.\n");
    return 0;
}
