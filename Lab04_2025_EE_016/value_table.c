#include <stdio.h>

int main(){
    int n = 1, multiplier = 1;
    printf("N\t10*N\t100*N\t1000*N\n");

    while (n <= 10){

        while (multiplier <= 1000){
            printf("%d", n*multiplier);
            printf("\t");
            multiplier *= 10;}
        printf("\n");
        n++;
        multiplier = 1;

    }
}
