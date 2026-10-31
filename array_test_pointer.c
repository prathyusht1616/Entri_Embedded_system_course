/*
Subtract two pointers 
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int arr[5] = {10, 20, 30, 40, 50};
    int array[15] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14};

    int *ptr1 = &arr[2]; //20
    int *ptr2 = &arr[4];  //40
    int *ptr3 = &array[2];
    int *ptr4 = &array[9];
    long int result1 = ptr2 - ptr1;  // if we substarct two pointers result is elements in between the two arrays. (here 4 - 2 = 2)
    long int result2 = ptr4 - ptr3; // (here 9 - 2 = 7)
    printf("result1: %ld\n", result1);
    printf("result2: %ld\n", result2);
    return 0;
}