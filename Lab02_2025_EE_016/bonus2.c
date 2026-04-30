#include <stdio.h>

int main(){
    int num, power, result = 1;
    printf("Enter number: ");
    scanf("%d", &num);
    printf("Enter power ");
    scanf("%d", &power);

    for(int i = 1; i <= power; i++){
        result *= num;
    }
    printf("Answer of %d to the power %d is %d", num, power, result);
}
