#include <stdio.h>
#include <string.h>

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
        printf("\n--- Mini Library Menu ---\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("\nEnter Book ID: ");
            scanf("%d", &library[count].id);
            printf("Enter Title: ");
            scanf("%s", library[count].title);
            printf("Enter Author: ");
            scanf("%s", library[count].author);
            count++;
            printf("Book added successfully!\n");
        }
        else if (choice == 2) {
            printf("\n--- Book List ---\n");
            for (int i = 0; i < count; i++) {
                printf("ID: %d | Title: %s | Author: %s\n", library[i].id, library[i].title, library[i].author);
            }
            if (count == 0) {
                printf("No books in the library yet.\n");
            }
        }
        else if (choice == 3) {
            printf("Exiting program...\n");
        }
        else {
            printf("Invalid choice! Try again.\n");
        }
    } while (choice != 3);

    return 0;
}
