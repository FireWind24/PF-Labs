#include <stdio.h>
#include <math.h>
int main(){

    double x1 = 1, x2 = 2, y1 = 1 , y2 = 2;
    double dist;
    dist = sqrt((pow(x2 - x1, 2)) + ((pow(y2 - y1, 2))));
    printf("The Distance is: %lf", dist);
}
