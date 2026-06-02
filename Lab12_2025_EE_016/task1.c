#include <stdio.h>

int main() {
    int numbers[] = {10, 20, 30, 40, 50};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    
    // point to the start of the array
    int *ptr = numbers; 

    printf("array elements using pointer arithmetic:\n");
    
    // pointing the pointer forward in memory
    for (int i = 0; i < size; i++) {
        printf("%d ", *ptr);
        ptr++; // move to the next int block
    }
    printf("\n");

    return 0;
}
