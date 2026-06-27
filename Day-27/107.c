#include <stdio.h>
#include <string.h>

#define MAX_EMPLOYEES 100

struct Employee {
    int id;
    char name[50];
    float basicSalary;
    float allowance;
    float deduction;
    float netSalary;
};

float calculateNetSalary(float basic, float allowance, float deduction) {
    return basic + allowance - deduction;
}

int main() {
    struct Employee employees[MAX_EMPLOYEES];
    int count = 0;
    int choice;

    do {
        printf("\n===== Salary Management System =====\n");
        printf("1. Add Employee\n");
        printf("2. Display All Employees\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");

        if (scanf("%d", &choice) != 1) {
            printf("Invalid input! Please enter a number.\n");
            while (getchar() != '\n'); // Clear input buffer
            continue;
        }

        if (choice == 1) {
            if (count >= MAX_EMPLOYEES) {
                printf("Employee limit reached!\n");
                continue;
            }

            struct Employee emp;
            printf("Enter Employee ID: ");
            scanf("%d", &emp.id);
            printf("Enter Name: ");
            scanf(" %[^\n]", emp.name);
            printf("Enter Basic Salary: ");
            scanf("%f", &emp.basicSalary);
            printf("Enter Allowance: ");
            scanf("%f", &emp.allowance);
            printf("Enter Deduction: ");
            scanf("%f", &emp.deduction);

            emp.netSalary = calculateNetSalary(emp.basicSalary, emp.allowance, emp.deduction);

            employees[count] = emp;
            count++;

            printf("Employee added successfully!\n");

        } else if (choice == 2) {
            if (count == 0) {
                printf("No employee records found.\n");
            } else {
                printf("\n%-5s %-20s %-10s %-10s %-10s %-10s\n", 
                       "ID", "Name", "Basic", "Allow", "Deduct", "Net");
                for (int i = 0; i < count; i++) {
                    printf("%-5d %-20s %-10.2f %-10.2f %-10.2f %-10.2f\n",
                           employees[i].id, employees[i].name,
                           employees[i].basicSalary, employees[i].allowance,
                           employees[i].deduction, employees[i].netSalary);
                }
            }
        } else if (choice != 3) {
            printf("Invalid choice! Please try again.\n");
        }

    } while (choice != 3);

    printf("Exiting Salary Management System. Goodbye!\n");
    return 0;
}
