#include <stdio.h>

int main() {
    int product = 3;
    while (product <= 100) {
        printf("Product = %d\n", product);
        product *= 3;
    }
    printf("Final Product = %d\n", product);
    return 0;
}
