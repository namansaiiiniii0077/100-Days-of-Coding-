//Q137: Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.

/*
Sample Test Cases:
Input 1:
GUEST
Output 1:
Welcome Guest!

*/


#include <stdio.h>

enum Role { ADMIN, USER, GUEST };

int main() {
    enum Role r = ADMIN;

    switch (r) {
        case ADMIN:
            printf("Welcome, Admin. You have full access.\n");
            break;
        case USER:
            printf("Hello, User. You have limited access.\n");
            break;
        case GUEST:
            printf("Hi, Guest. Please register to gain access.\n");
            break;
        default:
            printf("Unknown role.\n");
    }

    return 0;
}