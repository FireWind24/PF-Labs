#include <stdio.h>

int main() {
    int rollNumbers[] = {101, 105, 112, 118, 120, 125, 130};
    int marks[] = {85, 92, 76, 88, 95, 81, 90};
    int n = sizeof(rollNumbers) / sizeof(rollNumbers[0]);
    int key, mid;
    int left = 0;
    int right = n - 1;
    int found = 0;

    printf("Enter roll number to search: ");
    scanf("%d", &key);

    while (left <= right) {
        mid = (left + right) / 2;

        if (rollNumbers[mid] == key) {
            found = 1;
            break;
        } 
        else if (key < rollNumbers[mid]) {
            right = mid - 1;
        } 
        else {
            left = mid + 1;
        }
    }

    if (found) {
        printf("Roll Number %d found! Marks: %d\n", key, marks[mid]);
    } else {
        printf("Roll Number %d not found in the record.\n", key);
    }

    return 0;
}
