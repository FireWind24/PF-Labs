#include <stdio.h>
int main(){
    int num, total = 0, count = 0;
    float average;
    do{
        printf("Enter an integer: ");
        scanf("%d", &num);
        if (num != 9999){
            total += num;
            count ++;
        }

    }
    while(num != 9999);

    if (count != 0) {
        average = ((float)total / (float)count);
        printf("The Calculated Average is: %.1f\n", average);
    }

    else{
        printf("No numbers were entered.\n");
    }
}
