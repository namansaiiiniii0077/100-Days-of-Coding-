//Q95: Check if one string is a rotation of another.

/*
Sample Test Cases:
Input 1:
abcde
deabc
Output 1:
Rotation

Input 2:
abc
acb
Output 2:
Not rotation

*/

#include <stdio.h>

int main() {
    char str1[1000], str2[1000], temp[2000];
    int i = 0, j = 0, k = 0, match = 0;

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    while (str1[i] != '\0' && str1[i] != '\n') {
        i++;
    }

    while (str2[j] != '\0' && str2[j] != '\n') {
        j++;
    }

    if (i != j) {
        printf("Strings are not rotations.\n");
        return 0;
    }

    for (k = 0; k < i; k++) {
        temp[k] = str1[k];
    }
    for (k = 0; k < i; k++) {
        temp[i + k] = str1[k];
    }
    temp[2 * i] = '\0';

    for (k = 0; k <= 2 * i - j; k++) {
        int m = 0;
        while (m < j && temp[k + m] == str2[m]) {
            m++;
        }
        if (m == j) {
            match = 1;
            break;
        }
    }

    if (match) {
        printf("Strings are rotations of each other.\n");
    } else {
        printf("Strings are not rotations.\n");
    }

    return 0;
}