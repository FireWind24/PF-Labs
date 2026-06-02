#include <stdio.h>

union Numeric {
    int intValue;
    float floatValue;
    struct {
        short low;
        short high;
    } Parts;
};

int main() {
    union Numeric num;

    // setting the int value first
    num.intValue = 42;
    printf("after setting int:\n");
    printf("intValue: %d\n", num.intValue);
    printf("floatValue (garbage): %f\n\n", num.floatValue);

    // now setting the float, which overwrites the int memory entirely
    num.floatValue = 3.14f;
    printf("after setting float:\n");
    printf("intValue (garbage): %d\n", num.intValue);
    printf("floatValue: %f\n\n", num.floatValue);

    // messing with the nested struct
    num.Parts.low = 10;
    num.Parts.high = 20;
    printf("after setting parts:\n");
    printf("low: %d, high: %d\n", num.Parts.low, num.Parts.high);
    // intValue will be something completely different now because of memory sharing
    printf("intValue (overwritten): %d\n", num.intValue);

    return 0;
}
