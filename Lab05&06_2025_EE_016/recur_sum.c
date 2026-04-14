#include <stdio.h>

int recur_sum(int n){
    if (n == 0) return 0;
    return n + recur_sum(n - 1);
}

int main(){
    int num;
    printf("Enter Number: ");
    scanf("%d", &num);

    printf("Sum = %d\n", recur_sum(num));

}
