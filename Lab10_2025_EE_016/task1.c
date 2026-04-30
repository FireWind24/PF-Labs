#include <stdio.h>
int main(){

    int arr[] = {1, 2, 3, 4, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    int *arrPtr = arr;
    

    for (int i = 1; i<= size; i++){
        printf("%d\n", *arrPtr);
        arrPtr++;
    }




    return 0;
}