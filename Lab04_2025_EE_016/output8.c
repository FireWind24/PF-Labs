#include <stdio.h>

int main(void) {
    int row = 1;
    do {
        int col = 1;
        do {
            printf("* ");
            col++;
        } while (col <= 3);
        printf("\n");
        row++;
    } while (row <= 3);
    return 0;
}
