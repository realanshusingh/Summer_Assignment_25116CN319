#include <stdio.h>
#include <string.h>

int isRotation(const char *str1, const char *str2) 
{
    if (strlen(str1) != strlen(str2)) 
    {
        return 0;
    }

    char temp[200];
    strcpy(temp, str1);
    strcat(temp, str1);

    return (strstr(temp, str2) != NULL);
}

int main() 
{
    char str1[100], str2[100];

    printf("Enter first string: ");
    scanf("%99s", str1);

    printf("Enter second string: ");
    scanf("%99s", str2);

    if (isRotation(str1, str2)) 
    {
        printf("\"%s\" is a rotation of \"%s\".\n", str2, str1);
    }
    else 
    {
        printf("\"%s\" is NOT a rotation of \"%s\".\n", str2, str1);
    }

    return 0;
}
