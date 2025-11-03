//Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.

/*
Sample Test Cases:
Input 1:
10 2
Output 1:
Sum=12, Diff=8, Product=20, Quotient=5

Input 2:
7 3
Output 2:
Sum=10, Diff=4, Product=21, Quotient=2

*/

#include <stdio.h>

int main() {
    float num1, num2, sum, difference, product, quotient;

    // Taking input from the user
    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter second number: ");
    scanf("%f", &num2);

    // Performing calculations
    sum = num1 + num2;
    difference = num1 - num2;
    product = num1 * num2;

    // Checking for division by zero
    if (num2 != 0) {
        quotient = num1 / num2;
        printf("\nSum = %.2f", sum);
        printf("\nDifference = %.2f", difference);
        printf("\nProduct = %.2f", product);
        printf("\nQuotient = %.2f\n", quotient);
    } else {
        printf("\nDivision by zero is not allowed!\n");
    }

    return 0;
}
