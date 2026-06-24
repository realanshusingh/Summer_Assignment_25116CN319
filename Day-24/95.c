#include <stdio.h>
#include <string.h>

#define MAX_LEN 1000

int main() {
    char sentence[MAX_LEN];
    char longestWord[MAX_LEN];
    int maxLen = 0, currLen = 0, start = 0, i;

    printf("Enter a sentence: ");
    if (!fgets(sentence, sizeof(sentence), stdin)) 
    {
        printf("Error reading input.\n");
        return 1;
    }

    size_t len = strlen(sentence);
    if (len > 0 && sentence[len - 1] == '\n') 
    {
        sentence[len - 1] = '\0';
        len--;
    }

    for (i = 0; i <= len; i++) 
    {
        if (sentence[i] != ' ' && sentence[i] != '\0') 
        {
            currLen++;
        }
        else 
        {
            if (currLen > maxLen) 
            {
                maxLen = currLen;
                strncpy(longestWord, &sentence[start], currLen);
                longestWord[currLen] = '\0';
            }
            currLen = 0;
            start = i + 1;
        }
    }

    if (maxLen > 0) 
    {
        printf("Longest word: %s\n", longestWord);
        printf("Length: %d\n", maxLen);
    }
    else 
    {
        printf("No word found.\n");
    }

    return 0;
}
