#include <stdio.h>

int main() {
    // basic types
    char c;
    short s;
    int i;
    long l;
    long long ll;
    float f;
    double d;
    long double ld;

    
    int arr[20];
    int *ptr = arr;

    // using %zu because sizeof returns a size_t
    printf("size of char: %zu bytes\n", sizeof(c));
    printf("size of short: %zu bytes\n", sizeof(s));
    printf("size of int: %zu bytes\n", sizeof(i));
    printf("size of long: %zu bytes\n", sizeof(l));
    printf("size of long long: %zu bytes\n", sizeof(ll));
    printf("size of float: %zu bytes\n", sizeof(f));
    printf("size of double: %zu bytes\n", sizeof(d));
    printf("size of long double: %zu bytes\n", sizeof(ld));

    printf("\n");
    // comparing the whole array vs just the pointer
    printf("size of the entire array (20 ints): %zu bytes\n", sizeof(arr));
    printf("size of the pointer variable: %zu bytes\n", sizeof(ptr));

    return 0;
}
