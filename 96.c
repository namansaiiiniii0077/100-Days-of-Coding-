//Q96: Reverse each word in a sentence without changing the word order.

/*
Sample Test Cases:
Input 1:
I love coding
Output 1:
I evol gnidoc

*/

#include <stdio.h>

int main() {
    char str[1000], word[100];
    int i = 0, j = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0' && str[i] != '\n') {
        if (str[i] != ' ') {
            word[j++] = str[i];
        } else {
            for (int k = j - 1; k >= 0; k--) {
                printf("%c", word[k]);
            }
            printf(" ");
            j = 0;
        }
        i++;
    }

    for (int k = j - 1; k >= 0; k--) {
        printf("%c", word[k]);
    }
    printf("\n");

    return 0;
}