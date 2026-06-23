#include <stdio.h>
#include <string.h>

#define CHAR_SIZE 256 // Total possible ASCII characters

int main() {
    char str[1000];
    int freq[CHAR_SIZE] = {0};
    int i, len;

    printf("Enter a string: ");
    if (fgets(str, sizeof(str), stdin) == NULL) 
    {
        printf("Error reading input.\n");
        return 1;
    }

    len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') 
    {
        str[len - 1] = '\0';
        len--;
    }

    for (i = 0; i < len; i++) 
    {
        unsigned char ch = (unsigned char)str[i];
        freq[ch]++;
    }

    for (i = 0; i < len; i++) 
    {
        unsigned char ch = (unsigned char)str[i];
        if (freq[ch] == 1) 
        {
            printf("First non-repeating character: %c\n", ch);
            return 0;
        }
    }

    printf("No non-repeating character found.\n");
    return 0;
}
