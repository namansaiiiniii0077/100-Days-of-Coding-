//Q68: Delete an element from an array.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
1 2 4 5

*/

#include <stdio.h>

int main() {
    int n, i, deleteValue;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to delete: ");
    scanf("%d", &deleteValue);

    
    for (i = 0; i < n; i++) {
        if (arr[i] == deleteValue) {
            
            for (int j = i; j < n - 1; j++) {
                arr[j] = arr[j + 1];
            }
            n--;  
            i--;  
        }
    }

    printf("Output: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
