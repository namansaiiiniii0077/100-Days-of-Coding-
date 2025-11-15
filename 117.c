//Q117: Write a program to take two sorted arrays of size m and n as input. Merge both the arrays such that the merged array is also sorted. Print the merged array.

/*
Sample Test Cases:
Input 1:
nums1 = [2,7,11,15] nums2 = [4,8,10]
Output 1:
2 4 7 8 10 11 15

Input 2:
nums1 = [1,2,7] nums2 = [9,10,17]
Output 2:
1 2 7 9 10 17

Input 3:
nums1 = [-10,-2,7] nums2 = [-3, -1, 7]
Output 3:
-10 -3 -2 -1 7 7

*/

#include <stdio.h>

int main() {
    int a[1000], b[1000], merged[2000];
    int m, n, i = 0, j = 0, k = 0;

    printf("Enter size of first array: ");
    scanf("%d", &m);
    printf("Enter sorted elements of first array:\n");
    for (int x = 0; x < m; x++) {
        scanf("%d", &a[x]);
    }

    printf("Enter size of second array: ");
    scanf("%d", &n);
    printf("Enter sorted elements of second array:\n");
    for (int x = 0; x < n; x++) {
        scanf("%d", &b[x]);
    }

    while (i < m && j < n) {
        if (a[i] <= b[j]) {
            merged[k++] = a[i++];
        } else {
            merged[k++] = b[j++];
        }
    }

    while (i < m) {
        merged[k++] = a[i++];
    }

    while (j < n) {
        merged[k++] = b[j++];
    }

    printf("Merged sorted array:\n");
    for (int x = 0; x < k; x++) {
        printf("%d ", merged[x]);
    }
    printf("\n");

    return 0;
}