//Q79: Perform diagonal traversal of a matrix.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
1 2 4 7 5 3 6 8 9

*/

#include <stdio.h>

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

    printf("Output:\n");
    for (int col = 0; col < cols; col++) {
        int start_col = col;
        int start_row = 0;
        while (start_col >= 0 && start_row < rows) {
            printf("%d ", matrix[start_row][start_col]);
            start_col--;
            start_row++;
        }
    }

    for (int row = 1; row < rows; row++) {
        int start_col = cols - 1;
        int start_row = row;
        while (start_col >= 0 && start_row < rows) {
            printf("%d ", matrix[start_row][start_col]);
            start_col--;
            start_row++;
        }
    }

    printf("\n");
    return 0;
}
