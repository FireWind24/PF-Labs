#include <stdio.h>

float add(float x, float y){ return (x + y);}
float sub(float x, float y){ return (x - y);}
float mult(float x, float y){ return (x * y);}
float div(float x, float y){
        if (y == 0) {fprintf(stderr, "Cannot Divide By Zero!");
        return 0;}
        return (x / y);}

int main(){
    float A, B;
    int choice;
    printf("Enter A: ");
    scanf("%f", &A);
    printf("Enter B: ");
    scanf("%f", &B);
    printf("\t\t----MENU----\n\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n\nEnter the Corresponding Number: ");
    scanf("%d", &choice);

    switch (choice){

        case 1:
            printf("%.2f\n", add(A, B));
            break;
        case 2:
            printf("%.2f\n", sub(A, B));
            break;
        case 3:
            printf("%.2f\n", mult(A, B));
            break;
        case 4:
            printf("%.2f\n", div(A, B));
            break;
        default:
            printf("Invalid Choice!!!\n");
            break;
    }

}
