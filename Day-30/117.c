#include <stdio.h>
#include <string.h>

struct Student {
    int roll;
    char name[50];
    int marks;
};

int main() {
    struct Student students[50];
    int n, i;

    printf("Enter number of students: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("\nEnter roll number: ");
        scanf("%d", &students[i].roll);
        printf("Enter name: ");
        scanf("%s", students[i].name);
        printf("Enter marks: ");
        scanf("%d", &students[i].marks);
    }

    printf("\n--- Student Records ---\n");
    for(i = 0; i < n; i++) {
        printf("Roll: %d || Name: %s || Marks: %d\n",students[i].roll, students[i].name, students[i].marks);
    }

    return 0;
}
