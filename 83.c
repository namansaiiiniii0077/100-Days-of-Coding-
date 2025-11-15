//Q83: Count vowels and consonants in a string.

/*
Sample Test Cases:
Input 1:
hello
Output 1:
Vowels=2, Consonants=3

*/

#include <stdio.h>

int main() {
    char str[1000];
    int i = 0, vowels = 0, consonants = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

   
    while (str[i] != '\0' && str[i] != '\n') {
        char ch = str[i];

        
        if (ch >= 'A' && ch <= 'Z') {
            ch += 32;
        }

       
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            vowels++;
        }
        
        else if (ch >= 'a' && ch <= 'z') {
            consonants++;
        }

        i++;
    }

   
    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);

    return 0;
}