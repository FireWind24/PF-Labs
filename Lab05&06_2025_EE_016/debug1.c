#include <stdio.h>
int sum(int a, int b) {
    return a + b;
}
int main() {
    int num1 = 5, num2 = 10, result;
    result = sum(num1, num2);
    printf("Sum = %d", result);
}
