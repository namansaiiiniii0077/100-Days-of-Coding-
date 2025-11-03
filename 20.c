//Q20: Write a program to display the day of the week based on a number (1–7) using switch-case.

/*
Sample Test Cases:
Input 1:
1
Output 1:
Monday

Input 2:
5
Output 2:
Friday

*/

#include <stdio.h>
int main() {
    int day;

    printf("Enter a number (1-7) to get the corresponding day of the week: ");
    scanf("%d", &day);

    switch (day) {
        case 1:
            printf("\nMonday\n");
            break;
        case 2:
            printf("\nTuesday\n");
            break;
        case 3:
            printf("\nWednesday\n");
            break;
        case 4:
            printf("\nThursday\n");
            break;
        case 5:
            printf("\nFriday\n");
            break;
        case 6:
            printf("\nSaturday\n");
            break;
        case 7:
            printf("\nSunday\n");
            break;
        default:
            printf("\nInvalid input! Please enter a number between 1 and 7.\n");
    }

    return 0;
}