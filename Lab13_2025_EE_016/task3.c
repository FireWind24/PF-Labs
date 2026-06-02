#include <stdio.h>
#include <string.h>

struct Sensor {
    int id;
    char name[20];
    union {
        int intValue;
        float floatValue;
        struct {
            unsigned int status : 3;
            unsigned int mode   : 2;
        };
    };
};

int main() {
    struct Sensor s;
    
    // fixed: id is just an int, not a string
    s.id = 1; 
    
    // fixed: you have to use strcpy for strings in c
    strcpy(s.name, "TempSensor"); 
    
    // union sharing time. setting float last so it's the active one in memory
    s.intValue = 100;
    s.floatValue = 25.0; 
    
    // bitfields
    s.status = 5;
    s.mode = 3;
    
    // fixed: was using = instead of ==
    if (s.status == 4 && s.mode > 2) {
        printf("Sensor is active\n");
    } else {
        printf("Sensor is inactive\n");
    }
    
    // fixed: case sensitivity on s.id
    printf("Sensor ID: %d\n", s.id); 
    printf("Sensor Name: %s\n", s.name);
    
    // intValue will look like nonsense here because the float is occupying the memory
    printf("Int Value (shared): %d\n", s.intValue); 
    printf("Float Value: %f\n", s.floatValue);
    printf("Status: %u, Mode: %u\n", s.status, s.mode);
    
    // fixed: main needs to return an int
    return 0; 
}
