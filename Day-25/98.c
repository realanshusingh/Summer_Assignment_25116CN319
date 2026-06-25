#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_STRINGS 10
#define MAX_LEN 100

int main() {
    int n;
    char strings[MAX_STRINGS][MAX_LEN];

    printf("Enter number of strings (max %d): ", MAX_STRINGS);
    if (scanf("%d", &n) != 1 || n <= 0 || n > MAX_STRINGS) {
        printf("Invalid number of strings.\n");
        return 1;
    }

    printf("Enter %d strings:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%s", strings[i]);
    }

    int freq[26] = {0};
    for (int i = 0; strings[0][i] != '\0'; i++) {
        char ch = tolower(strings[0][i]);
        if (isalpha(ch)) {
            freq[ch - 'a'] = 1;
        }
    }

    for (int s = 1; s < n; s++) {
        int temp[26] = {0};
        for (int i = 0; strings[s][i] != '\0'; i++) {
            char ch = tolower(strings[s][i]);
            if (isalpha(ch)) {
                temp[ch - 'a'] = 1;
            }
        }
        for (int i = 0; i < 26; i++) {
            freq[i] = freq[i] && temp[i];
        }
    }

    printf("Common characters: ");
    int found = 0;
    for (int i = 0; i < 26; i++) {
        if (freq[i]) {
            printf("%c ", i + 'a');
            found = 1;
        }
    }
    if (!found) {
        printf("None");
    }
    printf("\n");

    return 0;
}
