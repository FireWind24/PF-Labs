#include <stdio.h>

int countDigits(int n)
{
    if(n == 1)
        return 1;
    else
        return 1 + countDigits(n / 10);
}

int main()
{
    int num, digits;
    printf("Enter a number: ");
    scanf("%d", &num);
    digits = countDigits(num);
    printf("Total digits are: %d", digits);
}
