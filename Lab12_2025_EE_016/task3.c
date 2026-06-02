#include <stdio.h>

int main() {
    // array of char pointers, basically just a list of strings
    const char *students[] = {"Umar", "Faizan", "Haseeb"};
    int count = sizeof(students) / sizeof(students[0]);
    printf("student list:\n");
    // looping through our array of pointers
    for (int i = 0; i < count; i++) {
        printf("%d. %s\n", i + 1, students[i]);
    }

    return 0;
}
