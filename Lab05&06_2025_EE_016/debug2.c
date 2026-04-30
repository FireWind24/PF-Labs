#include <stdio.h>

int cube(int num) {
    return num * num * num;
}

int main(void) {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Cube is: %d", cube(n));
    return 0;
}
