#include <stdio.h>

int main(){

    char *students[3] = {"Umar", "Faizan", "Mohsin"};
    int num_students = sizeof(students) / sizeof(students[0]);
    for (int i = 0; i < num_students; i++){
        printf("Student # %d: %s\n", i+1, (*students));
    } 

    return 0;
}