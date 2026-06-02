#include <stdio.h>
#include <string.h>

struct student {
    int roll;
    char name[50];
    double marks;
};

int main() {
    FILE *fp;
    int choice, search_roll, found;
    struct student s;

    while(1) {
        printf("\n1. add record\n2. display all\n3. search\n4. exit\nchoice: ");
        scanf("%d", &choice);

        if(choice == 1) {
            fp = fopen("students.txt", "a");
            if (fp == NULL) {
                printf("error: could not open file.\n");
                continue; 
            }
            
            printf("enter roll, name, marks: ");
            scanf("%d %s %lf", &s.roll, s.name, &s.marks);
            fprintf(fp, "%d %s %.2f\n", s.roll, s.name, s.marks);
            fclose(fp);
            
        } else if(choice == 2) {
            fp = fopen("students.txt", "r");
            if (fp == NULL) {
                printf("no records found (file might not exist yet).\n");
                continue;
            }
            
            printf("\n--- student records ---\n");
            // strictly ensure it reads exactly 3 items per line to prevent infinite loops on bad data
            while(fscanf(fp, "%d %s %lf", &s.roll, s.name, &s.marks) == 3) {
                printf("roll: %d, name: %s, marks: %.2f\n", s.roll, s.name, s.marks);
            }
            fclose(fp);
            
        } else if(choice == 3) {
            printf("enter roll to search: ");
            scanf("%d", &search_roll);
            
            fp = fopen("students.txt", "r");
            if (fp == NULL) {
                printf("no records found.\n");
                continue;
            }
            
            found = 0;
            while(fscanf(fp, "%d %s %lf", &s.roll, s.name, &s.marks) == 3) {
                if(s.roll == search_roll) {
                    printf("found -> name: %s, marks: %.2f\n", s.name, s.marks);
                    found = 1;
                    break;
                }
            }
            if(!found) printf("record not found.\n");
            fclose(fp);
            
        } else {
            break;
        }
    }
    return 0;
}
