#include <stdio.h>

int main() {
    char SHAPE;
    float RADIUS, SIDE, LENGTH, WIDTH, BASE, HEIGHT;
    printf("Enter shape (Circle/Square/Rectangle/Triangle): ");
    scanf(" %c", &SHAPE);
    switch (SHAPE) {
        case 'C':
            printf("Enter radius: ");
            scanf("%f", &RADIUS);
            printf("Area of Circle = %.2f\n", 3.14159 * RADIUS * RADIUS);
            break;
        case 'S':
            printf("Enter side: ");
            scanf("%f", &SIDE);
            printf("Area of Square = %.2f\n", SIDE * SIDE);
            break;
        case 'R':
            printf("Enter length and width: ");
            scanf("%f %f", &LENGTH, &WIDTH);
            printf("Area of Rectangle = %.2f\n", LENGTH * WIDTH);
            break;
        case 'T':
            printf("Enter base and height: ");
            scanf("%f %f", &BASE, &HEIGHT);
            {
                float AREA = 0.5 * BASE * HEIGHT;
                printf("Area of Triangle = %.2f\n", AREA);
            }
            break;
        default:
            printf("Invalid selection.\n");
    }
    return 0;
}
