#include <stdio.h>

int main(){

    int counter = 0, smallest, limit, current;

    while (1){

        if (counter == 0){
            printf("Enter Limit: ");
            scanf("%d", &limit);
            counter++;}

        if (counter > limit) break;

        printf("Enter number: ");
        scanf("%d", &current);

        if (counter == 1) smallest = current;

        else{

            if (current < smallest) smallest = current;
        }

        counter++;

    }
    printf("Smallest: %d", smallest);
}
