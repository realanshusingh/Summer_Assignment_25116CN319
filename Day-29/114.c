#include <stdio.h>
int main() {
    int arr[100], n = 0;
    int choice, i, pos, val;

    do {
        printf("\n--- Array Menu ---\n");
        printf("1. Insert Element\n");
        printf("2. Delete Element\n");
        printf("3. Display Array\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: // Insert
                if (n < 100) {
                    printf("Enter element to insert: ");
                    scanf("%d", &val);
                    arr[n] = val;
                    n++;
                    printf("Element inserted!\n");
                } else {
                    printf("Array is full!\n");
                }
                break;

            case 2: // Delete
                if (n > 0) {
                    printf("Enter position (0 to %d): ", n-1);
                    scanf("%d", &pos);
                    if (pos >= 0 && pos < n) {
                        for (i = pos; i < n-1; i++) {
                            arr[i] = arr[i+1];
                        }
                        n--;
                        printf("Element deleted!\n");
                    } else {
                        printf("Invalid position!\n");
                    }
                } else {
                    printf("Array is empty!\n");
                }
                break;

            case 3: // Display
                if (n > 0) {
                    printf("Array elements: ");
                    for (i = 0; i < n; i++) {
                        printf("%d ", arr[i]);
                    }
                    printf("\n");
                } else {
                    printf("Array is empty!\n");
                }
                break;

            case 4: // Exit
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid choice! Try again.\n");
        }
    } while (choice != 4);

    return 0;
}
