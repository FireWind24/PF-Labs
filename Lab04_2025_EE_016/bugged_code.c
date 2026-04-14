#include <stdio.h>

int main(void)
{
    int count = 1;
    while (count <= 10)
    {
        printf((count % 2 == 0)? "****\n" : "++++++++\n");
        count += 1;
    }
    return 0;
}
