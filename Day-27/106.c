#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Employee {
    int id;
    char name[50];
    char department[30];
    float salary;
};

void addEmployee() {
    struct Employee emp;
    FILE *fp = fopen("employees.dat", "ab"); 
    if (!fp) {
        printf("Error opening file!\n");
        return;
    }

    printf("Enter Employee ID: ");
    scanf("%d", &emp.id);
    getchar();

    printf("Enter Name: ");
    fgets(emp.name, sizeof(emp.name), stdin);
    emp.name[strcspn(emp.name, "\n")] = '\0';

    printf("Enter Department: ");
    fgets(emp.department, sizeof(emp.department), stdin);
    emp.department[strcspn(emp.department, "\n")] = '\0';

    printf("Enter Salary: ");
    scanf("%f", &emp.salary);

    fwrite(&emp, sizeof(emp), 1, fp);
    fclose(fp);

    printf("Employee added successfully!\n");
}

void displayEmployees() {
    struct Employee emp;
    FILE *fp = fopen("employees.dat", "rb");
    if (!fp) {
        printf("No employee records found.\n");
        return;
    }

    printf("\n--- Employee Records ---\n");
    while (fread(&emp, sizeof(emp), 1, fp)) {
        printf("ID: %d\nName: %s\nDepartment: %s\nSalary: %.2f\n\n",
               emp.id, emp.name, emp.department, emp.salary);
    }
    fclose(fp);
}

void searchEmployee() {
    int id, found = 0;
    struct Employee emp;
    FILE *fp = fopen("employees.dat", "rb");
    if (!fp) {
        printf("No employee records found.\n");
        return;
    }

    printf("Enter Employee ID to search: ");
    scanf("%d", &id);

    while (fread(&emp, sizeof(emp), 1, fp)) {
        if (emp.id == id) {
            printf("\nEmployee Found:\n");
            printf("ID: %d\nName: %s\nDepartment: %s\nSalary: %.2f\n",
                   emp.id, emp.name, emp.department, emp.salary);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("Employee with ID %d not found.\n", id);
    }
    fclose(fp);
}

void deleteEmployee() {
    int id, found = 0;
    struct Employee emp;
    FILE *fp = fopen("employees.dat", "rb");
    FILE *temp = fopen("temp.dat", "wb");

    if (!fp || !temp) {
        printf("Error opening file!\n");
        return;
    }

    printf("Enter Employee ID to delete: ");
    scanf("%d", &id);

    while (fread(&emp, sizeof(emp), 1, fp)) {
        if (emp.id != id) {
            fwrite(&emp, sizeof(emp), 1, temp);
        } else {
            found = 1;
        }
    }

    fclose(fp);
    fclose(temp);

    remove("employees.dat");
    rename("temp.dat", "employees.dat");

    if (found)
        printf("Employee deleted successfully!\n");
    else
        printf("Employee with ID %d not found.\n", id);
}

int main() {
    int choice;
    do {
        printf("\n===== Employee Management System =====\n");
        printf("1. Add Employee\n");
        printf("2. Display All Employees\n");
        printf("3. Search Employee by ID\n");
        printf("4. Delete Employee by ID\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: addEmployee(); break;
            case 2: displayEmployees(); break;
            case 3: searchEmployee(); break;
            case 4: deleteEmployee(); break;
            case 5: printf("Exiting program...\n"); break;
            default: printf("Invalid choice! Try again.\n");
        }
    } while (choice != 5);

    return 0;
}
