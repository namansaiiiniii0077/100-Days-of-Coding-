//Q149: Use malloc() to allocate structure memory dynamically and print details.

/*
Sample Test Cases:
Input 1:
Student allocated dynamically with details: Tina 105 88
Output 1:
Name: Tina | Roll: 105 | Marks: 88

*/

#include <stdio.h>
#include <stdlib.h>

enum Grade { FAIL, PASS, EXCELLENT };

struct Student {
    int rollNo;
    char name[50];
    float marks;
    enum Grade grade;
};

int main() {
    struct Student *ptr;
    ptr = (struct Student *)malloc(sizeof(struct Student));
    if (ptr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Enter Roll Number: ");
    scanf("%d", &ptr->rollNo);

    printf("Enter Name: ");
    scanf("%s", ptr->name);

    printf("Enter Marks: ");
    scanf("%f", &ptr->marks);

    if (ptr->marks < 40)
        ptr->grade = FAIL;
    else if (ptr->marks < 75)
        ptr->grade = PASS;
    else
        ptr->grade = EXCELLENT;

    printf("\n--- Student Details ---\n");
    printf("Roll Number: %d\n", ptr->rollNo);
    printf("Name: %s\n", ptr->name);
    printf("Marks: %.2f\n", ptr->marks);

    printf("Grade: ");
    switch (ptr->grade) {
        case FAIL: printf("FAIL\n"); break;
        case PASS: printf("PASS\n"); break;
        case EXCELLENT: printf("EXCELLENT\n"); break;
    }

    free(ptr);
    return 0;
}