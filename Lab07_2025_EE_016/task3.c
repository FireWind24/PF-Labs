#include <stdio.h>
int main() {
    int n, i, j, temp;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    int marks[n];
    printf("Enter the marks of %d students:\n", n);
    for (i = 0; i < n; i++) {
        printf("Student %d: ", i + 1);
        scanf("%d", &marks[i]);
    }
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1 - i; j++) {
            if (marks[j] < marks[j + 1]) {
                temp = marks[j];
                marks[j] = marks[j + 1];
                marks[j + 1] = temp;
            }
        }
    }
    printf("\nMarks in descending order:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", marks[i]);
    }
    printf("\n");
    return 0;
}
