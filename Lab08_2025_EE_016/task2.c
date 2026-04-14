#include <stdio.h>

int main() {
    int A[3][3] = { {1, 2, 3}, 
                    {4, 5, 6}, 
                    {7, 8, 9} };
                    
    int B[3][3] = { {2, 2, 7}, 
                    {6, -3, 4}, 
                    {3, 22, 0} };
                    
    int C[3][3] = {0}; 
    
    int i, j, k;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            for (k = 0; k < 3; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    printf("Resultant Matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d\t", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
