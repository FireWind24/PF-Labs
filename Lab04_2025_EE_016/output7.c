#include <stdio.h>

int main(void)
{
    unsigned int row = 10;
    unsigned int column;
    while (row >= 1) {
        column = 1;
        while (column <= 10) {
            printf("%s", row % 2 ? "<" : ">");
            ++column;
        }
        row--;
        printf("\n");
    }
    return 0;
}
