//Q134: Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.

/*
Sample Test Cases:
Input 1:
FAILURE
Output 1:
Operation failed

*/


#include <stdio.h>

int main() {
    enum Status { SUCCESS, FAILURE, TIMEOUT };
    enum Status result = SUCCESS;

    if (result == SUCCESS)
        printf("Operation completed successfully.\n");
    else if (result == FAILURE)
        printf("Operation failed.\n");
    else if (result == TIMEOUT)
        printf("Operation timed out.\n");

    return 0;
}