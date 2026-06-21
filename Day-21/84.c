#include <stdio.h>
#include <ctype.h>   // For toupper()
#include <string.h>  // For strlen()

int main() {
    char str[200];
    printf("Enter a string: ");
    if (fgets(str, sizeof(str), stdin) == NULL) {
        printf("Error reading input.\n");
        return 1;
    }

    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }

    for (size_t i = 0; str[i] != '\0'; i++) {
        str[i] = (char)toupper((unsigned char)str[i]);
    }

    printf("String in Uppercase: %s\n", str);

    return 0;
}
