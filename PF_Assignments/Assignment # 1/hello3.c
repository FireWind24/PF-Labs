#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
char name[100];
int number, i;
srand(time(NULL));
number = (rand() % 10) + 1;


printf("Enter your name: ");
scanf("%99s", name);

for(i = 1; i <= number; i++) {
printf("%d: ", number);
(number % 2 == 0)? printf("hello, ") : printf("hi there, ");
printf("%s!\n", name);

}

return 0;
}
