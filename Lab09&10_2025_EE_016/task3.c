#include <stdio.h>

int main(){

    char *students[4] = {"Umar", "Faizan", "Haseeb", "Mohsin"};
    int num_students = sizeof(students) / sizeof(students[0]);
    for (int i = 0; i < num_students; i++){
        printf("Student # %d: %s\n", i+1, *(students+i));
    } 

    return 0;
}