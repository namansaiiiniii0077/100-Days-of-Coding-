//Q98: Print initials of a name with the surname displayed in full.

/*
Sample Test Cases:
Input 1:
John David Doe
Output 1:
J.D. Doe

*/

#include <stdio.h>

int main() {
    char name[1000];
    int i = 0;

    printf("Enter a full name: ");
    fgets(name, sizeof(name), stdin);

    while (name[i] == ' ') {
        i++;
    }

    if (name[i] != '\0' && name[i] != '\n') {
        printf("%c. ", name[i]);
    }

    while (name[i] != '\0' && name[i] != '\n') {
        if (name[i] == ' ' && name[i + 1] != ' ' && name[i + 1] != '\n' && name[i + 1] != '\0') {
            int j = i + 1, count = 0;
            while (name[j] != ' ' && name[j] != '\n' && name[j] != '\0') {
                count++;
                j++;
            }

            if (name[j] == '\n' || name[j] == '\0') {
                printf("%.*s", count, &name[i + 1]);
                break;
            } else {
                printf("%c. ", name[i + 1]);
            }
        }
        i++;
    }

    printf("\n");
    return 0;
}