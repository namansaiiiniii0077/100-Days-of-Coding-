//Q139: Show that enums store integers by printing assigned values.

/*
Sample Test Cases:
Input 1:
No input
Output 1:
SUCCESS=0, FAILURE=1, TIMEOUT=2

*/


#include <stdio.h>

enum Role { ADMIN = 1, USER, GUEST };

int main() {
    enum Role r;
    const char *roleNames[] = { "ADMIN", "USER", "GUEST" };

    for (r = ADMIN; r <= GUEST; r++) {
        printf("%s = %d\n", roleNames[r - 1], r);
    }

    return 0;
}