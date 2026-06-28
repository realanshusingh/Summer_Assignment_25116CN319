#include <stdio.h>

struct BankAccount {
    double accountNumber;
    char name[50];
    float balance;
};

int main() {
    struct BankAccount accounts[100];
    int count = 0;
    int choice;

    do {
        printf("\n--- Bank Menu ---\n");
        printf("1. Create Account\n");
        printf("2. Display Accounts\n");
        printf("3. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Enter Account Number: ");
            scanf("%lf", &accounts[count].accountNumber);
            printf("Enter Name: ");
            scanf(" %[^\n]", accounts[count].name);
            printf("Enter Initial Balance: ");
            scanf("%f", &accounts[count].balance);
            count++;
            printf("Account created!\n");
        }
        else if (choice == 2) {
            printf("\n--- Account List ---\n");
            for (int i = 0; i < count; i++) {
                printf("Account No: %lf | Name: %s | Balance: %.2f\n",
                       accounts[i].accountNumber,
                       accounts[i].name,
                       accounts[i].balance);
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
