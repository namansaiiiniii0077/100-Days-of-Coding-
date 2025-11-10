//Q37: Write a program to find the LCM of two numbers.

/*
Sample Test Cases:
Input 1:
4 5
Output 1:
20

Input 2:
7 3
Output 2:
21

*/

#include <stdio.h>

int main() {
    int a, b;
    printf("Enter two positive integers: ");
    scanf("%d %d", &a, &b);

    // Find LCM using the formula: LCM(a, b) = (a * b) / GCD(a, b)
    int gcd;
    int tempA = a;
    int tempB = b;

    // Find GCD using Euclidean algorithm
    while (tempB != 0) {
        int remainder = tempA % tempB;
        tempA = tempB;
        tempB = remainder;
    }
    gcd = tempA;

    int lcm = (a * b) / gcd;
    printf("LCM is: %d\n", lcm);
    return 0;
}
