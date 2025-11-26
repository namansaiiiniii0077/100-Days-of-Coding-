//Q143: Find and print the student with the highest marks.

/*
Sample Test Cases:
Input 1:
3 students: Ravi 101 95, Sita 102 85, Aman 103 88
Output 1:
Topper: Ravi (Marks: 95)

*/

#include <stdio.h>
#include <string.h>

enum Grade {
    FRESHMAN = 1,
    SOPHOMORE,
    JUNIOR,
    SENIOR
};

struct Student {
    char name[50];
    int marks;
    enum Grade grade;
};

int main() {
    int n, i;
    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student students[n];

    for (i = 0; i < n; i++) {
        printf("\nEnter name of student %d: ", i + 1);
        scanf("%s", students[i].name);
        printf("Enter marks of %s: ", students[i].name);
        scanf("%d", &students[i].marks);
        printf("Enter grade (1=FRESHMAN, 2=SOPHOMORE, 3=JUNIOR, 4=SENIOR): ");
        int g;
        scanf("%d", &g);
        students[i].grade = (enum Grade)g;
    }

    int maxIndex = 0;
    for (i = 1; i < n; i++) {
        if (students[i].marks > students[maxIndex].marks) {
            maxIndex = i;
        }
    }

    printf("\nStudent with highest marks:\n");
    printf("Name: %s\n", students[maxIndex].name);
    printf("Marks: %d\n", students[maxIndex].marks);
    printf("Grade: ");
    switch (students[maxIndex].grade) {
        case FRESHMAN:  printf("FRESHMAN\n"); break;
        case SOPHOMORE: printf("SOPHOMORE\n"); break;
        case JUNIOR:    printf("JUNIOR\n"); break;
        case SENIOR:    printf("SENIOR\n"); break;
        default:        printf("UNKNOWN\n"); break;
    }

    return 0;
}