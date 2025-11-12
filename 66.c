//Q66: Insert an element in a sorted array at the appropriate position.

/*
Sample Test Cases:
Input 1:
5
1 2 4 5 6
3
Output 1:
1 2 3 4 5 6

*/

#include <stdio.h>

int main() {
    int n, i, insert, pos;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n + 1];  
    printf("Enter %d elements (sorted): ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to insert: ");
    scanf("%d", &insert);

    
    for (i = 0; i < n; i++) {
        if (arr[i] > insert) {
            pos = i;
            break;
        }
    }

    
    for (i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos] = insert;

    printf("Output: ");
    for (i = 0; i < n + 1; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
