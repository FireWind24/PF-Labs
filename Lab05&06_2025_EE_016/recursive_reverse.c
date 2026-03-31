#include <stdio.h>

void recursive_reverse(int n){
    if (n == 0){printf("\n"); return;}
    printf("%d",n % 10);
    return recursive_reverse(n / 10);
}

int main(){
    int n;

    printf("Enter number: ");
    scanf("%d", &n);

    recursive_reverse(n);

}
