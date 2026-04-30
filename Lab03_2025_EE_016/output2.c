#include <stdio.h>

int main() {
    int temperature;
    printf("Enter the temperature in Celsius: ");
    scanf("%d", &temperature);
    if (temperature >= 30) {
        printf("It's a hot day.\n");
    }
    else {
        printf("It's a cool day.\n");
        printf("You might need a jacket.\n");
    }

    return 0;
}
