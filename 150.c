//Q100: Print all sub-strings of a given string.

/*
Sample Test Cases :
Input 1 :
abc
Output 1:
a,ab,abc,b,bc,c

*/

#include <stdio.h>
int main() {
    char str[100];
    int i, j, k, len;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

   
    for (len = 0; str[len] != '\0' && str[len] != '\n'; len++);

    printf("All substrings are:\n");
    for (i = 0; i < len; i++) {
        for (j = i; j < len; j++) {
            for (k = i; k <= j; k++) {
                putchar(str[k]);
            }
            putchar('\n');
        }
    }

    return 0;
}


