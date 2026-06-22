#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    int freq[256] = {0}; // Array to store frequency of each ASCII character
    int i;

    printf("Enter a string: ");
    if (fgets(str, sizeof(str), stdin) == NULL) 
    {
        printf("Error reading input.\n");
        return 1;
    }

    str[strcspn(str, "\n")] = '\0';

    for (i = 0; str[i] != '\0'; i++) 
    {
        unsigned char ch = str[i];
        freq[ch]++;
    }

    printf("\nCharacter frequencies:\n");
    for (i = 0; i < 256; i++) 
    {
        if (freq[i] > 0) 
        {
            printf("'%c' : %d\n", i, freq[i]);
        }
    }

    return 0;
}
