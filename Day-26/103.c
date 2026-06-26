#include <stdio.h>
#include <stdlib.h>

void checkBalance(float balance);
float deposit(float balance);
float withdraw(float balance);

int main() {
    int pin, enteredPin, attempts = 0;
    float balance = 1000.00f;
    int choice;

    pin = 1234;

    printf("===== Welcome to ATM Simulator =====\n");

    while (attempts < 3) {
        printf("Enter your 4-digit PIN: ");
        if (scanf("%d", &enteredPin) != 1) {
            printf("Invalid input. Please enter numbers only.\n");
            while (getchar() != '\n');
            continue;
        }

        if (enteredPin == pin) {
            printf("PIN accepted.\n");
            break;
        } else {
            attempts++;
            printf("Incorrect PIN. Attempts left: %d\n", 3 - attempts);
        }
    }

    if (attempts == 3) {
        printf("Too many incorrect attempts. Card blocked.\n");
        return 0;
    }
    do {
        printf("\n===== ATM Menu =====\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");

        if (scanf("%d", &choice) != 1) {
            printf("Invalid input. Please enter a number between 1-4.\n");
            while (getchar() != '\n');
            continue;
        }

        switch (choice) {
            case 1:
                checkBalance(balance);
                break;
            case 2:
                balance = deposit(balance);
                break;
            case 3:
                balance = withdraw(balance);
                break;
            case 4:
                printf("Thank you for using our ATM. Goodbye!\n");
                break;
            default:
                printf("Invalid choice. Please select between 1-4.\n");
        }
    } while (choice != 4);

    return 0;
}

void checkBalance(float balance) {
    printf("Your current balance is: Rs. %.2f\n", balance);
}

float deposit(float balance) {
    float amount;
    printf("Enter amount to deposit: Rs. ");
    if (scanf("%f", &amount) != 1 || amount <= 0) {
        printf("Invalid amount. Deposit failed.\n");
        while (getchar() != '\n');
        return balance;
    }
    balance += amount;
    printf("Rs. %.2f deposited successfully.\n", amount);
    return balance;
}
float withdraw(float balance) {
    float amount;
    printf("Enter amount to withdraw: Rs. ");
    if (scanf("%f", &amount) != 1 || amount <= 0) {
        printf("Invalid amount. Withdrawal failed.\n");
        while (getchar() != '\n');
        return balance;
    }
    if (amount > balance) {
        printf("Insufficient balance. Withdrawal failed.\n");
    } else {
        balance -= amount;
        printf("Rs. %.2f withdrawn successfully.\n", amount);
    }
    return balance;
}
