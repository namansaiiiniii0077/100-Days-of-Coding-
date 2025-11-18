//Q136: Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.

/*
Sample Test Cases:
Input 1:
ADD 10 20
Output 1:
30

*/


#include <stdio.h>

enum Operation { ADD = 1, SUBTRACT, MULTIPLY };

int main() {
    int a = 10, b = 5;
    enum Operation choice = ADD;

    switch (choice) {
        case ADD:
            printf("Addition: %d\n", a + b);
            break;
        case SUBTRACT:
            printf("Subtraction: %d\n", a - b);
            break;
        case MULTIPLY:
            printf("Multiplication: %d\n", a * b);
            break;
        default:
            printf("Invalid choice\n");
    }

    return 0;
}