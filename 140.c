//Q140: Define a struct with enum Gender and print person's gender.

/*
Sample Test Cases:
Input 1:
Gender=MALE
Output 1:
Male

*/


#include <stdio.h>

enum Gender { MALE, FEMALE, OTHER };

struct Person {
    char name[50];
    enum Gender gender;
};

int main() {
    struct Person p = { "Jordan", FEMALE };

    switch (p.gender) {
        case MALE:
            printf("%s is Male\n", p.name);
            break;
        case FEMALE:
            printf("%s is Female\n", p.name);
            break;
        case OTHER:
            printf("%s is Other\n", p.name);
            break;
    }

    return 0;
}