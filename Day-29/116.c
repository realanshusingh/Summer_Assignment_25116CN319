#include <stdio.h>
#include <string.h>

struct Item {
    int id;
    char name[50];
    int quantity;
    float price;
};

int main() {
    struct Item inventory[100];
    int count = 0;   // number of items
    int choice, i;

    do {
        printf("\n--- Inventory Menu ---\n");
        printf("1. Add Item\n");
        printf("2. Display Items\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: // Add Item
                if (count < 100) {
                    printf("Enter Item ID: ");
                    scanf("%d", &inventory[count].id);
                    printf("Enter Item Name: ");
                    scanf(" %[^\n]", inventory[count].name);
                    printf("Enter Quantity: ");
                    scanf("%d", &inventory[count].quantity);
                    printf("Enter Price: ");
                    scanf("%f", &inventory[count].price);
                    count++;
                    printf("Item added successfully!\n");
                } else {
                    printf("Inventory is full!\n");
                }
                break;

            case 2: // Display Items
                if (count > 0) {
                    printf("\n--- Inventory List ---\n");
                    for (i = 0; i < count; i++) {
                        printf("ID: %d | Name: %s | Qty: %d | Price: %.2f\n",
                               inventory[i].id,
                               inventory[i].name,
                               inventory[i].quantity,
                               inventory[i].price);
                    }
                } else {
                    printf("No items in inventory!\n");
                }
                break;

            case 3: // Exit
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid choice! Try again.\n");
        }
    } while (choice != 3);

    return 0;
}
