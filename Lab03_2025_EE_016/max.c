#include <stdio.h>

int main(){
    int a, b, c, max;
    printf("Enter 1st Integer: ");
    scanf("%d", &a);
    printf("Enter 2nd Integer: ");
    scanf("%d", &b);
    printf("Enter 3rd Integer: ");
    scanf("%d", &c);
    max = a;
    (b > max)? (max = b): (max = a);
    (c > max)? (max = c): (max = a);
    printf("Max: %d\n", max);
}
