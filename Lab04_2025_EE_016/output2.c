#include <stdio.h>
int main(void) {
int x;
printf("Using break:\n");
for (x = 1; x <= 10; ++x) {
if (x == 5) {
break;
}
printf("%d ", x);
}
printf("\nBroke out of loop at x = %d\n\n", x);
printf("Using continue:\n");
for (x = 1; x <= 10; ++x) {
if (x % 2 == 0) {

continue;
}
printf("%d ", x);
}
printf("\n");
return 0;
}
