#include <stdio.h>
struct Book {
    int id;
    char title[50];
    char author[50];
};

int main() {
    struct Book library[100];
    int count = 0;
    int choice;

    do {
        printf("\n--- Library Menu ---\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Enter Book ID: ");
            scanf("%d", &library[count].id);
            printf("Enter Title: ");
            scanf(" %[^\n]", library[count].title);
            printf("Enter Author: ");
            scanf(" %[^\n]", library[count].author);
            count++;
            printf("Book added!\n");
        }
        else if (choice == 2) {
            printf("\n--- Book List ---\n");
            for (int i = 0; i < count; i++) {
                printf("ID: %d | Title: %s | Author: %s\n",
                       library[i].id,
                       library[i].title,
                       library[i].author);
            }
        }
        else if (choice == 3) {
            printf("Exiting...\n");
        }
        else {
            printf("Invalid choice!\n");
        }
    } while (choice != 3);

    return 0;
}
