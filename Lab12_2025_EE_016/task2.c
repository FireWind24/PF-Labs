#include <stdio.h>

int main() {
    int arr[] = {5, 15, 25, 35, 45};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("accessing elements with pointer notation:\n");
    
    for (int i = 0; i < size; i++) {
        // *(arr + i) is exactly the same as arr[i]
        // it just adds the index offset to the base memory address
        printf("element %d: %d\n", i, *(arr + i));
    }

    return 0;
}
