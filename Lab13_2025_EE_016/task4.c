#include <stdio.h>
#include <string.h>

struct Employee {
    int id;
    char name[30];
    // anonymous union
    union {
        float salary;
        // anonymous struct inside the union
        struct {
            int hoursWorked;
            int overtimeHours;
        };
    };
};

int main() {
    struct Employee emp;
    
    emp.id = 777;
    strcpy(emp.name, "hassan");

    // let's assign the nested struct values directly
    emp.hoursWorked = 40;
    emp.overtimeHours = 5;

    printf("before touching salary:\n");
    printf("hours: %d, overtime: %d\n", emp.hoursWorked, emp.overtimeHours);
    printf("salary (garbage): %f\n\n", emp.salary);

    // now we assign salary, which will blast away the hours data since they share memory
    emp.salary = 50000.50f;

    printf("after setting salary:\n");
    printf("salary: %.2f\n", emp.salary);
    printf("hours (overwritten): %d\n", emp.hoursWorked);
    printf("overtime (overwritten): %d\n", emp.overtimeHours);

    return 0;
}
