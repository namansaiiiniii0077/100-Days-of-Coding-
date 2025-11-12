//Q77: Check if the elements on the diagonal of a matrix are distinct.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 1
Output 1:
False

Input 2:
3 3
1 2 3
4 5 6
7 8 9
Output 2:
True

*/

#include <stdio.h>
#include <stdbool.h>

int main() {
    int rows, cols;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);
    int matrix[rows][cols];
    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    bool is_distinct = true;
    int diagonal[rows];
    for (int i = 0; i < rows; i++) {
        diagonal[i] = matrix[i][i];
    }

    for (int i = 0; i < rows; i++) {
        for (int j = i + 1; j < rows; j++) {
            if (diagonal[i] == diagonal[j]) {
                is_distinct = false;
                break;
            }
        }
    }

    printf("Output: %s\n", is_distinct ? "True" : "False");
    return 0;
}
