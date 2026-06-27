#include <stdio.h>

int main() {
    char name[50];
    int roll;
    int marks[5];
    int total = 0;
    float percentage;
    char grade;

    printf("Enter Student Name: ");
    scanf(" %[^\n]", name); 
    printf("Enter Roll Number: ");
    scanf("%d", &roll);

    printf("Enter marks for 5 subjects (out of 100):\n");
    for (int i = 0; i < 5; i++) {
        printf("Subject %d: ", i + 1);
        if (scanf("%d", &marks[i]) != 1 || marks[i] < 0 || marks[i] > 100) {
            printf("Invalid marks! Please enter numbers between 0 and 100.\n");
            return 1;
        }
        total += marks[i];
    }

    percentage = total / 5.0;

    if (percentage >= 90)
        grade = 'A';
    else if (percentage >= 75)
        grade = 'B';
    else if (percentage >= 60)
        grade = 'C';
    else if (percentage >= 40)
        grade = 'D';
    else
        grade = 'F';

    printf("\n===== STUDENT MARKSHEET =====\n");
    printf("Name       : %s\n", name);
    printf("Roll No.   : %d\n", roll);
    printf("-----------------------------\n");
    for (int i = 0; i < 5; i++) {
        printf("Subject %d : %d\n", i + 1, marks[i]);
    }
    printf("-----------------------------\n");
    printf("Total Marks: %d / 500\n", total);
    printf("Percentage : %.2f%%\n", percentage);
    printf("Grade      : %c\n", grade);
    printf("Result     : %s\n", (grade == 'F') ? "FAIL" : "PASS");
    printf("=============================\n");

    return 0;
}
