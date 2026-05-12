#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX_LEN 32
void bubble_sort(int[], int); /*Prototypes of the sorting algos*/
void minimum_element(int[], int);
int main(int argc, char* argv[]){

    int number_array[MAX_LEN];
    int count =  0;
    int use_bubble = 0;
    int quiet_mode = 0;
    if (argc == 1){ printf("USAGE: Enter Integers to Sort them in ascending order, use flags -b and -q for bubble sort and quiet mode respectively");
    return 1;}

    for(int i = 1; i < argc; i++){ /*checking for flags on every iteration so flags can be anywhere and as many*/
        if(strcmp(argv[i], "-b") == 0){
            use_bubble = 1;
        }                           /*I've used strcmp for this comparison from the string.h library*/
        else if (strcmp(argv[i], "-q") == 0){
        quiet_mode = 1;
        }
        else{
            if(count >= MAX_LEN){                               /*Checking if MAX LENGTH is reaced*/
                printf("Cutting off from %d", atoi(argv[i]));
                break;
            }
            number_array[count] = atoi(argv[i]); /*Otherwise appendind the current input argument to my array after casting it to int*/
            count++; //keeping count of the array integers
        }
    }


    if (count == 0){
        printf("Nothing was entered!");
        return 1;
    }
    if (use_bubble == 1){ /*Algorithm Choice, using bubble if flag seen, other wise defaulting to selection sort*/
        bubble_sort(number_array, count);
    }
    else{
        minimum_element(number_array, count);
    }

    if (quiet_mode == 0){ // printing the output if quiet mode flag NOT seen
        for (int i = 0; i < count; i++){
            printf("%d\n", number_array[i]);
        }
    }

    return 0;
}

void bubble_sort(int arr[], int size){ /*Implementation of Bubble Sort*/
    for(int i = 0; i < size - 1; i++){
        for(int j = 0; j < size - i - 1; j++){
            if (arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
void minimum_element(int arr[], int size){ /*Implementation of Selection Sort*/
    int start = 0; //starting with index 0
    for (int i = 0; i < size - 1; i++){
        int smallest = start; // assuming that starting index has the smallest value
        for (int j = start; j < size; j++){
            if (arr[j] < arr[smallest]){ //checking to find a smaller element, and updating the index of the smallest
                smallest = j;
                
            }
        }
    int temp = arr[start]; // swapping the smallest to the first 
    arr[start] = arr[smallest];
    arr[smallest]= temp;
   start++;} //appending the start position from the next iteration 
}