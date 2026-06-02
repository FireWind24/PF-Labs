#include <stdio.h>
#include <string.h>

struct Student {
    int id;
    char name[30];
    float marks;
};

int main() {
    // trying the normal sequential way first
    struct Student s1 = {16, "Umar", 95.5};
    
    // doing designated initialization for the second one
    struct Student s2 = {
        .marks = 92.0,
        .id = 32,
        .name = "Haseeb"
    };

    printf("student 1 -> id: %d, name: %s, marks: %.1f\n", s1.id, s1.name, s1.marks);
    printf("student 2 -> id: %d, name: %s, marks: %.1f\n", s2.id, s2.name, s2.marks);

    return 0;
}
