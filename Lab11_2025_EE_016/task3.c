#include <stdio.h>
#define SIZE 5

void fixedFunction(int *ptr) {
    // pointers only know their own size, so this just does pointer size / int size
    // usually 8 / 4 = 2 on 64-bit systems. added the missing parenthesis here too.
    printf("size calculation inside function (pointer/int) = %zu\n", sizeof(ptr) / sizeof(ptr[0]));

    // changed *ptr[0] to ptr[0] since ptr[0] is already an int value, not an address
    ptr[0] = 100;

    // move pointer 3 spots forward
    ptr = ptr + 3;
    *ptr = 999;
}

int main() {
    int arr[SIZE] = {10, 20, 30, 40, 50};
    
    // arr[0] is just a raw value, took out the unnecessary * operator
    printf("first value = %d\n", arr[0]);

    // pass the array to the function
    fixedFunction(arr);

    // printing the array just to see what the function actually did
    printf("\narray after function call:\n");
    for(int i = 0; i < SIZE; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
