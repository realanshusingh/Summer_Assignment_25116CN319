#include <stdio.h>
#include <string.h>
#define MAX_STUDENTS 100
#define MAX_SUBJECTS 3
typedef struct {
   int id;
   char name[50];
   float marks[MAX_SUBJECTS];
} Student;
Student students[MAX_STUDENTS];
int studentCount = 0;
void addStudent() {
   if (studentCount >= MAX_STUDENTS) {
       printf("Maximum student limit reached.\n");
       return;
   }
   printf("Enter Student ID: ");
   scanf("%d", &students[studentCount].id);
   printf("Enter Student Name: ");
   scanf(" %[^\n]", students[studentCount].name);
   for (int i = 0; i < MAX_SUBJECTS; i++) {
       printf("Enter marks for Subject %d: ", i + 1);
       scanf("%f", &students[studentCount].marks[i]);
   }
   studentCount++;
   printf("Student added successfully!\n");
}
void updateMarks() {
   int id, found = 0;
   printf("Enter Student ID to update marks: ");
   scanf("%d", &id);
   for (int i = 0; i < studentCount; i++) {
       if (students[i].id == id) {
           found = 1;
           for (int j = 0; j < MAX_SUBJECTS; j++) {
               printf("Enter new marks for Subject %d: ", j + 1);
               scanf("%f", &students[i].marks[j]);
           }
           printf("Marks updated successfully!\n");
           break;
       }
   }
   if (!found) {
       printf("Student with ID %d not found.\n", id);
   }
}
void displayStudents() {
   if (studentCount == 0) {
       printf("No students to display.\n");
       return;
   }
   for (int i = 0; i < studentCount; i++) {
       printf("\nID: %d\nName: %s\n", students[i].id, students[i].name);
       for (int j = 0; j < MAX_SUBJECTS; j++) {
           printf("Subject %d Marks: %.2f\n", j + 1, students[i].marks[j]);
       }
   }
}
void calculateAverage() {
   if (studentCount == 0) {
       printf("No students available to calculate averages.\n");
       return;
   }
   float total[MAX_SUBJECTS] = {0};
   for (int i = 0; i < studentCount; i++) {
       for (int j = 0; j < MAX_SUBJECTS; j++) {
           total[j] += students[i].marks[j];
       }
   }
   printf("\nAverage Marks:\n");
   for (int j = 0; j < MAX_SUBJECTS; j++) {
       printf("Subject %d: %.2f\n", j + 1, total[j] / studentCount);
   }
}
int main() {
   int choice;
   while (1) {
       printf("\n--- Student Record Management ---\n");
       printf("1. Add Student\n2. Update Marks\n3. Display Students\n4. Calculate Average Marks\n5. Exit\n");
       printf("Enter your choice: ");
       scanf("%d", &choice);
       switch (choice) {
           case 1:
               addStudent();
               break;
           case 2:
               updateMarks();
               break;
           case 3:
               displayStudents();
               break;
           case 4:
               calculateAverage();
               break;
           case 5:
               printf("Exiting program.\n");
               return 0;
           default:
               printf("Invalid choice. Please try again.\n");
       }
   }
}