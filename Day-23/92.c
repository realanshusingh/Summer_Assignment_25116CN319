#include <stdio.h>
#include <string.h>

int main() 
{
    char str[1000];
    int freq[256] = {0}; // Frequency array for all ASCII characters
    int i, maxCount = 0;
    char maxChar;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) 
    {
        unsigned char ch = (unsigned char)str[i];
        freq[ch]++;
    }

    for (i = 0; i < 256; i++) 
    {
        if (freq[i] > maxCount) 
        {
            maxCount = freq[i];
            maxChar = (char)i;
        }
    }

    printf("Maximum occurring character: '%c'\n", maxChar);
    return 0;
}
