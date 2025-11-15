//Q100: Print all sub-strings of a string.

/*
Sample Test Cases:
Input 1:
abc
Output 1:
a,ab,abc,b,bc,c

*/

#include <stdio.h>

int main() {
    char str[1000];
    int i, j, k;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    int length = 0;
    while (str[length] != '\0' && str[length] != '\n') {
        length++;
    }

    printf("All substrings:\n");
    for (i = 0; i < length; i++) {
        for (j = i; j < length; j++) {
            for (k = i; k <= j; k++) {
                printf("%c", str[k]);
            }
            printf("\n");
        }
    }

    return 0;
}