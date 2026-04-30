#include <stdio.h>

int factorial(int n);
int main(){
    int num, fact;
    printf("Enter a number: ");
    scanf("%d", &num);

    fact = factorial(num);
    printf("Factorial: %d\n", fact);
}

int factorial(int n){
    int fact = 1;
    for (int i = 1; i <= n; i++){
        fact *= i;
    }

    return fact;
}
