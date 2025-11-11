//Q41: Write a program to swap the first and last digit of a number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001

*/

#include <stdio.h>

int main() {
    int num, firstDigit, lastDigit, digits = 0, temp;

    printf("Enter a number: ");
    scanf("%d", &num);

    lastDigit = num % 10;

    temp = num;
    while (temp >= 10) {
        temp /= 10;
    }
    firstDigit = temp;

    
    if (firstDigit == lastDigit) {
        printf("Output: %d\n", num);
        return 0;
    }

   
    temp = num;
    while (temp != 0) {
        temp /= 10;
        digits++;
    }

   
    num = num % (int)pow(10, digits - 1);
    num = num / 10;

   
    num = lastDigit * (int)pow(10, digits - 1) + num * 10 + firstDigit;

    printf("Output: %d\n", num);
    return 0;
}