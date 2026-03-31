#include <stdio.h>

int main(){
    int num, fact = 1;
    printf("Enter a positive number: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++){
            fact *= i;
    }
    printf("Factorial of %d: %d\n", num, fact);
}
