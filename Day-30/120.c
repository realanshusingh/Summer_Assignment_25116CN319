#include <stdio.h>
#include <string.h>
struct Student {
    int roll;
    char name[50];
    int marks;
};

void addStudent(struct Student students[], int *count);
void displayStudents(struct Student students[], int count);
void searchStudent(struct Student students[], int count);
void updateStudent(struct Student students[], int count);
void deleteStudent(struct Student students[], int *count);

int main() {
    struct Student students[100];
    int count = 0;
    int choice;

    do {
        printf("\n--- Student Record System ---\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Update Student\n");
        printf("5. Delete Student\n");
        printf("6. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1: addStudent(students, &count); break;
            case 2: displayStudents(students, count); break;
            case 3: searchStudent(students, count); break;
            case 4: updateStudent(students, count); break;
            case 5: deleteStudent(students, &count); break;
            case 6: printf("Exiting program...\n"); break;
            default: printf("Invalid choice! Try again.\n");
        }
    } while(choice != 6);

    return 0;
}

// Add student
void addStudent(struct Student students[], int *count) {
    printf("Enter Roll Number: ");
    scanf("%d", &students[*count].roll);
    printf("Enter Name: ");
    scanf("%s", students[*count].name);
    printf("Enter Marks: ");
    scanf("%d", &students[*count].marks);
    (*count)++;
    printf("Student added successfully!\n");
}

// Display all students
void displayStudents(struct Student students[], int count) {
    if(count == 0) {
        printf("No student records available.\n");
        return;
    }
    printf("\n--- Student List ---\n");
    for(int i = 0; i < count; i++) {
        printf("Roll: %d | Name: %s | Marks: %d\n", students[i].roll, students[i].name, students[i].marks);
    }
}

// Search student by roll number
void searchStudent(struct Student students[], int count) {
    int roll, found = 0;
    printf("Enter Roll Number to search: ");
    scanf("%d", &roll);

    for(int i = 0; i < count; i++) {
        if(students[i].roll == roll) {
            printf("\nRecord Found: Roll: %d | Name: %s | Marks: %d\n", students[i].roll, students[i].name, students[i].marks);
            found = 1;
            break;
        }
    }
    if(!found) {
        printf("\nNo student found with Roll Number %d.\n", roll);
    }
}

// Update student details
void updateStudent(struct Student students[], int count) {
    int roll, found = 0;
    printf("Enter Roll Number to update: ");
    scanf("%d", &roll);

    for(int i = 0; i < count; i++) {
        if(students[i].roll == roll) {
            printf("Enter new Name: ");
            scanf("%s", students[i].name);
            printf("Enter new Marks: ");
            scanf("%d", &students[i].marks);
            printf("Record updated successfully!\n");
            found = 1;
            break;
        }
    }
    if(!found) {
        printf("\nNo student found with Roll Number %d.\n", roll);
    }
}

// Delete student record
void deleteStudent(struct Student students[], int *count) {
    int roll, found = 0;
    printf("Enter Roll Number to delete: ");
    scanf("%d", &roll);

    for(int i = 0; i < *count; i++) {
        if(students[i].roll == roll) {
            for(int j = i; j < *count - 1; j++) {
                students[j] = students[j+1]; // shift records
            }
            (*count)--;
            printf("Record deleted successfully!\n");
            found = 1;
            break;
        }
    }
    if(!found) {
        printf("\nNo student found with Roll Number %d.\n", roll);
    }
}
