//Q125: Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content.

/*
Sample Test Cases:
Input 1:
Existing File: data.txt (Content before execution: Hello world)
User Input: This is appended text.
Output 1:
File updated successfully with appended text.

*/

#include <stdio.h>
#include <string.h>

int main() {
    FILE *fp;
    char line[1000];

    fp = fopen("info.txt", "a");
    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    printf("Enter a new line to append: ");
    fgets(line, sizeof(line), stdin);

    int len = strlen(line);
    if (line[len - 1] == '\n') {
        line[len - 1] = '\0';
    }

    fprintf(fp, "%s\n", line);
    fclose(fp);

    printf("Text appended successfully to info.txt\n");
    return 0;
}