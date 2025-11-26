//Q142: Store details of 5 students in an array of structures and print all.

/*
Sample Test Cases:
Input 1:
Details of 5 students (Name, Roll, Marks)
Output 1:
Tabular list of all 5 students with their details

*/

#include <stdio.h>


enum Department {
    CSE, ECE, MECH, CIVIL, ELECTRICAL
};


struct Student {
    int rollNo;
    char name[50];
    float marks;
    enum Department dept;
};


const char* getDeptName(enum Department d) {
    switch (d) {
        case CSE: return "CSE";
        case ECE: return "ECE";
        case MECH: return "MECH";
        case CIVIL: return "CIVIL";
        case ELECTRICAL: return "ELECTRICAL";
        default: return "UNKNOWN";
    }
}

int main() {
    struct Student students[5];

    printf("Enter details of 5 students:\n");
    for (int i = 0; i < 5; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Roll Number: ");
        scanf("%d", &students[i].rollNo);
        printf("Name: ");
        scanf(" %[^\n]", students[i].name);
        printf("Marks: ");
        scanf("%f", &students[i].marks);
        printf("Department (0-CSE, 1-ECE, 2-MECH, 3-CIVIL, 4-ELECTRICAL): ");
        int deptInput;
        scanf("%d", &deptInput);
        students[i].dept = (enum Department)deptInput;
    }

    printf("\n--- Student Details ---\n");
    for (int i = 0; i < 5; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Roll Number: %d\n", students[i].rollNo);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %.2f\n", students[i].marks);
        printf("Department: %s\n", getDeptName(students[i].dept));
    }

    return 0;
}