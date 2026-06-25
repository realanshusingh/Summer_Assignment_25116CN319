#include <stdio.h>
#include <string.h>

int main() {
    char str[200], words[50][50], temp[50];
    int i, j, k = 0, count = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ') {
            words[count][k++] = str[i];
        } else {
            words[count][k] = '\0';
            count++;
            k = 0;
        }
    }
    words[count][k] = '\0';
    count++;

    for (i = 0; i < count - 1; i++) {
        for (j = i + 1; j < count; j++) {
            if (strlen(words[i]) > strlen(words[j])) {
                strcpy(temp, words[i]);
                strcpy(words[i], words[j]);
                strcpy(words[j], temp);
            }
        }
    }

    printf("\nWords sorted by length:\n");
    for (i = 0; i < count; i++) {
        printf("%s ", words[i]);
    }
    printf("\n");

    return 0;
}
