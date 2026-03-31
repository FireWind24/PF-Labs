#include <stdio.h>

void main(){

    int a = 3, b = 4, temp;

    printf("Before Swap\na: %d\nb:%d\n", a, b);
    temp = a;
    a = b;
    b = temp;
    printf("After Swap\na: %d\nb:%d\n", a, b);

}
