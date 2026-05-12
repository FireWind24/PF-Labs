#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_LENGTH 32
void min_element(int*, int);
void bubble_sort(int*, int);
int main(int argc, char *argv[]){
    int number_array[MAX_LENGTH];

    int count = 0;
    int use_bubble = 0;
    int quiet_mode = 0;
    if (argc == 1){ 
    printf("usage: sorter [-b] [-q] number1 [number2 ... ] (maximum 32 numbers)\n");
    return 1;}

    for(int i = 1; i < argc; i++){
        if (strcmp(argv[i], "-b") == 0) use_bubble = 1;
        else if (strcmp(argv[i], "-q") == 0) quiet_mode = 1;
        else{
            if (count >= MAX_LENGTH){ printf("Cutting off from %d", argv[i]);return 1;}
            number_array[count] = atoi(argv[i]);
            count++;
        }
    }

    if(count == 0){
        printf("Nothing was entered!");
        return 1;
    }

    if (use_bubble == 1){
        bubble_sort(number_array, count);
    }
    else{
         min_element(number_array, count);
    }

    if (quiet_mode == 0){
        for(int i = 0; i < count; i++){
            printf("%d\t", number_array[i]);
        }
    }


    

    return 0;
}

void min_element(int *arrPtr, int n){
    int start = 0;
    for(int i = 0; i < n; i++){
        for (int j = start; j < n; j++){
            if (arrPtr[j] < arrPtr[start]){
                int temp = arrPtr[start];
                arrPtr[start] = arrPtr[j];
                arrPtr[j] = temp;
                

                
            }
        }
        
        start++;
    }
}

void bubble_sort(int* arrPtr, int n){
    for(int i = 0; i < n - 1; i++){
        for(int j = 0; j < n - i - 1; j++){
            if (arrPtr[j] > arrPtr[j+1]){
                int temp = arrPtr[j];
                arrPtr[j] = arrPtr[j+1];
                arrPtr[j+1] = temp;
            }
        }
    }
}