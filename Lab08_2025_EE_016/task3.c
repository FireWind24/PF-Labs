#include <stdio.h>

void printDiagonal(int arr[][3], int size) {
    printf("Diagonal Elements: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i][i]);
    }
    printf("\n");
}

int main() {
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    printf("Original Matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    printDiagonal(matrix, 3);

    return 0;
}
