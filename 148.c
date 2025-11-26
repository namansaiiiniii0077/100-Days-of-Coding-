//Q148: Take two structs as input and check if they are identical.

/*
Sample Test Cases:
Input 1:
Student1: Asha 101 90
Student2: Asha 101 90
Output 1:
Same

*/

#include <stdio.h>
#include <string.h>

enum CompareResult { DIFFERENT, IDENTICAL };

struct Student {
    int id;
    char name[50];
    float marks;
};

enum CompareResult areIdentical(struct Student s1, struct Student s2) {
    if (s1.id == s2.id &&
        strcmp(s1.name, s2.name) == 0 &&
        s1.marks == s2.marks) {
        return IDENTICAL;
    }
    return DIFFERENT;
}

int main() {
    struct Student s1, s2;

    printf("Enter details for Student 1:\n");
    printf("ID: ");
    scanf("%d", &s1.id);
    printf("Name: ");
    scanf("%s", s1.name);
    printf("Marks: ");
    scanf("%f", &s1.marks);

    printf("\nEnter details for Student 2:\n");
    printf("ID: ");
    scanf("%d", &s2.id);
    printf("Name: ");
    scanf("%s", s2.name);
    printf("Marks: ");
    scanf("%f", &s2.marks);

    if (areIdentical(s1, s2) == IDENTICAL) {
        printf("\nThe two structs are IDENTICAL.\n");
    } else {
        printf("\nThe two structs are DIFFERENT.\n");
    }

    return 0;
}