//Q92: Find the first repeating lowercase alphabet in a string.

/*
Sample Test Cases:
Input 1:
stress
Output 1:
s

*/

#include <stdio.h>

int main() {
    char str[1000];
    int freq[26] = {0};
    int i = 0, found = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0' && str[i] != '\n') {
        if (str[i] >= 'a' && str[i] <= 'z') {
            if (freq[str[i] - 'a'] == 1) {
                printf("First repeating lowercase alphabet: %c\n", str[i]);
                found = 1;
                break;
            }
            freq[str[i] - 'a']++;
        }
        i++;
    }

    if (!found) {
        printf("No repeating lowercase alphabet found.\n");
    }

    return 0;
}