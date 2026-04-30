#include <stdio.h>
#include <math.h>
#define PI ((double)22/(double)7)
int main(){
    double a = 10, b = 5, c = 15, d = 20, angle = 45*(PI / 180);
    double num, denom;
    num = sqrt((pow((a/b)*(sin(angle)),a/(b*b))) + (pow((b/a)*(cos(angle)),1/(a+b))));
    denom = (c * tan(angle)) - (d/c);

    printf("Computed value = %lf", (num / denom));
}
