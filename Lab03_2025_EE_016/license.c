#include <stdio.h>

int main(){
    int age; //declared age
    printf("Enter your age:");
    scanf("%d", &age);       //replaced %f with %d and put &
    if (age >= 18)           //removed :
    {
        printf("You are eligible for the driving license.\n");
    }
    else{                    //removed :
        printf("You are not eligible for the driving license.\n"); //put ;
    }
}
