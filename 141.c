//Q141: Define a structure Student with name, roll_no, and marks, then read and print one student's data.

/*
Sample Test Cases:
Input 1:
Name: Asha
Roll: 101
Marks: 90
Output 1:
Name: Asha | Roll: 101 | Marks: 90

*/

#include <stdio.h>

enum Department {
    SCIENCE,
    ARTS,
    COMMERCE
};

struct Student {
    char name[50];
    int roll_no;
    float marks;
    enum Department dept;
};

int main() {
    struct Student s;
    int dept_choice;

    printf("Enter name: ");
    fgets(s.name, sizeof(s.name), stdin);

    printf("Enter roll number: ");
    scanf("%d", &s.roll_no);

    printf("Enter marks: ");
    scanf("%f", &s.marks);

    printf("Select department (0: Science, 1: Arts, 2: Commerce): ");
    scanf("%d", &dept_choice);

    s.dept = (enum Department)dept_choice;

    printf("\n--- Student Details ---\n");
    printf("Name      : %s", s.name);
    printf("Roll No   : %d\n", s.roll_no);
    printf("Marks     : %.2f\n", s.marks);
    printf("Department: ");

    switch (s.dept) {
        case SCIENCE:  printf("Science\n"); break;
        case ARTS:     printf("Arts\n"); break;
        case COMMERCE: printf("Commerce\n"); break;
        default:       printf("Unknown\n"); break;
    }

    return 0;
}