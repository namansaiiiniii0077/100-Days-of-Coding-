//Q145: Return a structure containing top student's details from a function.

/*
Sample Test Cases:
Input 1:
3 students: Riya 101 89, Karan 102 96, Meena 103 92
Output 1:
Top Student: Karan | Roll: 102 | Marks: 96

*/


#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int marks;
    int rollNo;
};

struct Student findTopStudent(struct Student students[], int n) {
    int maxIndex = 0;
    for (int i = 1; i < n; i++) {
        if (students[i].marks > students[maxIndex].marks) {
            maxIndex = i;
        }
    }
    return students[maxIndex];
}

int main() {
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student students[n];

    for (int i = 0; i < n; i++) {
        printf("\nEnter name of student %d: ", i + 1);
        scanf("%s", students[i].name);
        printf("Enter roll number of %s: ", students[i].name);
        scanf("%d", &students[i].rollNo);
        printf("Enter marks of %s: ", students[i].name);
        scanf("%d", &students[i].marks);
    }

    struct Student top = findTopStudent(students, n);

    printf("\nTop Student Details:\n");
    printf("Name: %s\n", top.name);
    printf("Roll No: %d\n", top.rollNo);
    printf("Marks: %d\n", top.marks);

    return 0;
}