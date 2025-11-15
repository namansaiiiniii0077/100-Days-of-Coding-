//Q114: Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.

/*
Sample Test Cases:
Input 1:
s = "abcabcbb"
Output 1:
3

Input 2:
s = "bbbbb"
Output 2:
1

Input 3:
s = "pwwkew"
Output 3:
3

*/

#include <stdio.h>
#include <string.h>

int isUnique(char str[], int start, int end) {
    int freq[256] = {0};
    for (int i = start; i <= end; i++) {
        if (freq[(unsigned char)str[i]] == 1)
            return 0;
        freq[(unsigned char)str[i]] = 1;
    }
    return 1;
}

int main() {
    char s[1000];
    printf("Enter a string: ");
    fgets(s, sizeof(s), stdin);

    int n = strlen(s);
    if (s[n - 1] == '\n') s[n - 1] = '\0';
    n = strlen(s);

    int maxLen = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            if (isUnique(s, i, j)) {
                int len = j - i + 1;
                if (len > maxLen)
                    maxLen = len;
            }
        }
    }

    printf("Length of longest substring without repeating characters: %d\n", maxLen);
    return 0;
}