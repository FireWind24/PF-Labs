#include <stdio.h>

void printArray(int arr[], int n, char* message) {
    printf("%s: ", message);
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {

    int arr[10] = {1, 2, 3, 4, 5};
    int n = 5; // number of active elements

    printArray(arr, n, "Initial array");

    int del_index = 2;
    for (int i = del_index; i < n - 1; i++) {
        arr[i] = arr[i + 1]; // shift everything left
    }
    n--; // reduce active elements
    printArray(arr, n, "After deleting 3");

  
    int insert_index = 2;
    for (int i = n; i > insert_index; i--) {
        arr[i] = arr[i - 1]; 
    }
    arr[insert_index] = 6; 
    n++;
    printArray(arr, n, "After inserting 6");
    int append_arr[4] = {7, 8, 9, 10};
    for (int i = 0; i < 4; i++) {
        arr[n] = append_arr[i]; 
        n++; 
    }
    printArray(arr, n, "After appending [7, 8, 9, 10]");

    return 0;
}
