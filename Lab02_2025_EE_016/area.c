#include <stdio.h>
int main()
{
    double Len, Wid, Area, Per;

    printf("Enter the Length of Rectangle: ");
    scanf("%lf", &Len);
    printf("Enter the Width of Rectangle: ");
    scanf("%lf", &Wid);

    Area = Len * Wid;
    Per = 2*(Len + Wid);

    printf("Area is %lf | Perimeter is %lf", Area, Per);
}
