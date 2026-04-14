#include <stdio.h>

int main() {
    //Added outer braces {} and a comma after the second row
    int matrix[3][4] = {
        {12, 7, 9, 15},
        {8, 14, 6, 10}, 
        {11, 5, 13, 2}
    };
    printf("Matrix with maximum of each row highlighted:\n");
    //Changed condition to i < 3 (array goes 0, 1, 2)
    for(int i = 0; i < 3; i++) {
        //Added missing semicolon
        int max = 0; 
        //Changed condition to j < 4
        for(int j = 0; j < 4; j++) {
            //Changed < to > to correctly find the highest number
            if(matrix[i][j] > max) {
                //Replaced += with = to properly update the max value
                max = matrix[i][j];
            }
        }
        //Changed condition to j < 4
        for(int j = 0; j < 4; j++) {
            // Changed %f to %d, and corrected indices 
            printf("%d", matrix[i][j]);
            
            // BUG FIX 9: Changed assignment = to comparison ==
            if(matrix[i][j] == max) {
                printf("*");
            }
            printf("\t");
        }
        // missing semicolon
        printf("\n"); 
    }
    return 0;
}
