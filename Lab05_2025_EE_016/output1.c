#include <stdio.h>
int maximum(int x, int y); // Function prototype

int main(void)
{
    int num1, num2, result;
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);
    result = maximum(num1, num2);
    printf("Maximum is: %d\n", result);
    return 0;
}

int maximum(int x, int y)
{
    if (x > y)
        return x;
    else
        return y;
}
