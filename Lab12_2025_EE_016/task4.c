#include <stdio.h>

void displayMessage() {
    // added the missing semicolon here
    printf("This is a callback function\n"); 
}

// fixed the parameter to be a proper function pointer format
void executeCallback(void (*callback)()) {
    printf("Executing callback...\n");
    
    // actually call the function instead of just referencing it
    callback(); 
}

int main() {
    executeCallback(displayMessage);
    
    // return needs a 0 since main returns an int
    return 0; 
}
