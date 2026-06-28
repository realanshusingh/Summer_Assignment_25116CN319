#include <stdio.h>

struct Ticket {
    int ticketNumber;
    char passengerName[50];
    char boarding[50];
    char destination[50];
};

int main() {
    struct Ticket tickets[100];
    int count = 0;
    int choice;

    do {
        printf("\n--- Ticket Booking Menu ---\n");
        printf("1. Book Ticket\n");
        printf("2. Display Tickets\n");
        printf("3. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Enter Ticket Number: ");
            scanf("%d", &tickets[count].ticketNumber);

            printf("Enter Passenger Name: ");
            scanf(" %[^\n]", tickets[count].passengerName);

            printf("Enter Boarding station: ");
            scanf(" %[^\n]", tickets[count].boarding);

            printf("Enter Destination: ");
            scanf(" %[^\n]", tickets[count].destination);

            count++;
            printf("Ticket booked successfully!\n");
        }
        else if (choice == 2) {
            printf("\n--- Ticket List ---\n");
            for (int i = 0; i < count; i++) {
                printf("Ticket No: %d | Name: %s | Destination: %s | Destination: %s\n",
                       tickets[i].ticketNumber,
                       tickets[i].passengerName,
                       tickets[i].boarding,
                       tickets[i].destination);
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
