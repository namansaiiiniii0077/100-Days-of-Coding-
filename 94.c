//Q94: Find the longest word in a sentence.

/*
Sample Test Cases:
Input 1:
I love programming
Output 1:
programming

*/

#include <stdio.h>

int main() {
    char str[1000], word[100], longest[100];
    int i = 0, j = 0, maxLen = 0, len = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0' && str[i] != '\n') {
        if (str[i] != ' ') {
            word[j++] = str[i];
        } else {
            word[j] = '\0';
            len = j;
            if (len > maxLen) {
                maxLen = len;
                for (int k = 0; k <= len; k++) {
                    longest[k] = word[k];
                }
            }
            j = 0;
        }
        i++;
    }

    word[j] = '\0';
    len = j;
    if (len > maxLen) {
        maxLen = len;
        for (int k = 0; k <= len; k++) {
            longest[k] = word[k];
        }
    }

    printf("Longest word: %s\n", longest);
    printf("Length: %d\n", maxLen);

    return 0;
}