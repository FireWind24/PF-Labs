#include <stdio.h>

int inputmarks(int students);
float averagemarks(int total, int students);

int main(){
    int students, sum;
    float average;
    printf("Enter the number of Students: ");
    scanf("%d", &students);

    sum = inputmarks(students);
    average = averagemarks(sum, students);

    printf("Class Average: %.2f\n", average);
}

int inputmarks(int students){
    int total = 0, current;
    for (int i = 1; i <= students; i++){
        printf("Enter marks of Student # %d: ", i);
        scanf("%d", &current);
        total += current;
    }
    return total;
}

float averagemarks(int total, int students){
    return (float) total / (float) students;
}
