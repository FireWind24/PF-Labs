#include <stdio.h>

int recursive_exponent(int base, int exp){
    if (exp == 0) return 1;
    if (exp == 1) return base;
    return base * (recursive_exponent(base, exp - 1));
}

int main(){
    int base, exp, solution;
    printf("Enter Base: ");
    scanf("%d", &base);
    printf("Enter Exponent: ");
    scanf("%d", &exp);
    solution = recursive_exponent(base, exp);

    printf("Solution : %d\n", solution);

}
