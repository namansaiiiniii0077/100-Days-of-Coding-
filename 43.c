//Q43: Write a program to check if a number is a strong number.

/*
Sample Test Cases:
Input 1:
145
Output 1:
Strong number

Input 2:
123
Output 2:
Not strong number

*/

#include <stdio.h>

int factorial(int n) {
    if (n == 0) return 1;
    return n * factorial(n - 1);
}

int main() {
    int num, sum = 0, temp;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;
    while (temp != 0) {
        int digit = temp % 10;
        sum += factorial(digit);
        temp /= 10;
    }

    if (sum == num) {
        printf("Output: Strong number\n");
    } else {
        printf("Output: Not strong number\n");
    }

    return 0;
}