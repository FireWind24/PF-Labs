#include <stdio.h>
#include <string.h>
#include <ctype.h> // For isalnum() and tolower()

int main() {
    char str[100];   
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; // Remove newline
    int left = 0;
    int right = strlen(str) - 1;
    int is_palindrome = 1; 
  while (left < right) {
        while (left < right && !isalnum(str[left])) {
            left++;
        }
        while (left < right && !isalnum(str[right])) {
            right--;
        }
        if (tolower(str[left]) != tolower(str[right])) {
            is_palindrome = 0; 
            break;
        }
        left++;
        right--;
    }

    if (is_palindrome) {
        printf("\"%s\" is a palindrome!\n", str);
    } else {
        printf("\"%s\" is not a palindrome.\n", str);
    }

    return 0;
}
