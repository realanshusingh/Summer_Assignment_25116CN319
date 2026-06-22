#include <stdio.h>
#include <ctype.h>  // For isspace()

int main() {
    char str[500];
    int i = 0, wordCount = 0;
    int inWord = 0;

    printf("Enter a sentence: ");
    if (!fgets(str, sizeof(str), stdin)) 
    {
        printf("Error reading input.\n");
        return 1;
    }

    while (str[i] != '\0') 
    {
        if (!isspace((unsigned char)str[i]) && inWord == 0) 
        {
            inWord = 1;
            wordCount++;
        } 
        else if (isspace((unsigned char)str[i])) 
        {
            inWord = 0;
        }
        i++;
    }

    printf("Total words: %d\n", wordCount);
    return 0;
}
