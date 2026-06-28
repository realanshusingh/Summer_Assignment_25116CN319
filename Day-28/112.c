#include <stdio.h>

struct Contact {
    char name[50];
    char phone[20];
    char email[50];
};

int main() {
    struct Contact contacts[100];
    int count = 0;               
    int choice;

    do {
        printf("\n--- Contact Management Menu ---\n");
        printf("1. Add Contact\n");
        printf("2. Display Contacts\n");
        printf("3. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Enter Name: ");
            scanf(" %[^\n]", contacts[count].name);

            printf("Enter Phone: ");
            scanf(" %[^\n]", contacts[count].phone);

            printf("Enter Email: ");
            scanf(" %[^\n]", contacts[count].email);

            count++;
            printf("Contact added successfully!\n");
        }
        else if (choice == 2) {
            printf("\n--- Contact List ---\n");
            for (int i = 0; i < count; i++) {
                printf("Name: %s | Phone: %s | Email: %s\n",
                       contacts[i].name,
                       contacts[i].phone,
                       contacts[i].email);
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
