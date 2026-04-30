#include <stdio.h>
#define PI (float) 22 / (float) 7
float areaCircle(float r);
int main(){
    float rad, area;
    printf("Enter the radius: ");
    scanf("%f", &rad);

    area = areaCircle(rad);
    printf("Area: %.2f\n", area);
}

float areaCircle(float r){

    return PI * r * r;

}
