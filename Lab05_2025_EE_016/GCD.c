#include <stdio.h>

int recursive_gcd(int a, int b){

    if (b == 0) return a;

    return recursive_gcd(b, a%b);

}

int main(){
    int a, b;
    printf("Enter A: ");
    scanf("%d", &a);
    printf("Enter B: ");
    scanf("%d", &b);

    printf("GCD: %d\n", recursive_gcd(a, b));
}
