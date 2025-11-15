//Q127: Write a program that reads text from input.txt, converts all lowercase letters to uppercase, and writes the result to output.txt.

/*
Sample Test Cases:
Input 1:
Input File (input.txt): Hello World\nC programming
Output 1:
Output File (output.txt): HELLO WORLD\nC PROGRAMMING

*/

#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *inFile, *outFile;
    char ch;

    inFile = fopen("input.txt", "r");
    if (inFile == NULL) {
        printf("Error: Cannot open input.txt\n");
        return 1;
    }

    outFile = fopen("output.txt", "w");
    if (outFile == NULL) {
        printf("Error: Cannot create output.txt\n");
        fclose(inFile);
        return 1;
    }

    while ((ch = fgetc(inFile)) != EOF) {
        if (islower(ch)) {
            ch = toupper(ch);
        }
        fputc(ch, outFile);
    }

    fclose(inFile);
    fclose(outFile);

    printf("Conversion complete. Output written to output.txt\n");
    return 0;
}