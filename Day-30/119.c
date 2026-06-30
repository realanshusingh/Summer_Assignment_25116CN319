#include <stdio.h>
#include <string.h>
struct Employee {
    int id;
    char name[50];
    char dept[50];
};
int main() {
    struct Employee employees[100];
    int count = 0;
    int choice;
    do {
        printf("\n--- Mini Employee Management ---\n");
        printf("1. Add Employee\n");
        printf("2. Display Employees\n");
        printf("3. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if(choice == 1) {
            printf("Enter Employee ID: ");
            scanf("%d", &employees[count].id);
            printf("Enter Name: ");
            scanf("%s", employees[count].name);
            printf("Enter Department: ");
            scanf("%s", employees[count].dept);
            count++;
            printf("Employee added successfully!\n");
        }
        else if(choice == 2) {
            printf("\n--- Employee List ---\n");
            for(int i = 0; i < count; i++) {
                printf("ID: %d | Name: %s | Dept: %s\n", employees[i].id, employees[i].name, employees[i].dept);
            }
            if(count == 0) {
                printf("No employees added yet.\n");
            }
        }
        else if(choice == 3) {
            printf("Exiting program...\n");
        }
        else {
            printf("Invalid choice! Try again.\n");
        }
    } while(choice != 3);

    return 0;
}
