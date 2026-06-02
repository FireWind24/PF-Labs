#include <stdio.h>

//  swap using memory addresses
void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

// bubble sort algorithm
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            // if they're out of order swap them
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

int main() {
    // 8 random integers
    int arr[8] = {42, 12, 8, 99, 23, 5, 17, 1};
    int n = 8; 

    printf("before sorting: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // after sorting it
    bubbleSort(arr, n);

    printf("after sorting: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
