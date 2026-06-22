#include <stdio.h>
#include <string.h>
#include <ctype.h> // For tolower()

int main() {
    char str[100];
    int i, len, isPalindrome = 1;

    printf("Enter a string: ");
    if (fgets(str, sizeof(str), stdin) == NULL) 
    {
        printf("Error reading input.\n");
        return 1;
    }

    len = strlen(str);
    if (str[len - 1] == '\n') 
    {
        str[len - 1] = '\0';
        len--;
    }

    for (i = 0; i < len / 2; i++) 
    {
        if (tolower(str[i]) != tolower(str[len - i - 1])) 
        {
            isPalindrome = 0;
            break;
        }
    }

    if (isPalindrome)
        printf("The string is a palindrome.\n");
    else
        printf("The string is not a palindrome.\n");

    return 0;
}
