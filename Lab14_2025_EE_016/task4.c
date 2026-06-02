#include <stdio.h>

int main() {
    FILE *fp;
    int roll;
    char name[20];
    double marks;
    int n, i;

    printf("Enter number of students: ");
    scanf("%d", &n);

    fp = fopen("students.txt", "w");
    if (fp == NULL) {
        printf("Cannot open file.\n");
        return 1;
    }

    for (i = 0; i < n; i++) {   
        printf("Enter roll number: ");
        scanf("%d", &roll);
        printf("Enter name: ");
        scanf("%s", name);
        printf("Enter marks: ");
        scanf("%lf", &marks);
        
        fprintf(fp, "%d %s %.2f\n", roll, name, marks);
    }
    
    fclose(fp);
    printf("Data written successfully.\n");
    return 0;
}
