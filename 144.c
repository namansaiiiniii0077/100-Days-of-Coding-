//Q144: Write a function that accepts a structure as parameter and prints its members.

/*
Sample Test Cases:
Input 1:
Student: Neha 104 92
Output 1:
Name: Neha | Roll: 104 | Marks: 92

*/


#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int marks;
    int rollNo;
};

void printStudent(struct Student s) {
    printf("Name: %s\n", s.name);
    printf("Roll No: %d\n", s.rollNo);
    printf("Marks: %d\n", s.marks);
}

int main() {
    struct Student st1;

    strcpy(st1.name, "Naman");
    st1.rollNo = 101;
    st1.marks = 95;

    printStudent(st1);

    return 0;
}