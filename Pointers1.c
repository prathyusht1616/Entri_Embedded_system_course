#include <stdio.h>

int main()
{

    // Normal Variable
    int var = 1000;
    int value = 100;


    // Pointer Variable ptr that stores address of var
    int *ptr = &var;
    int *ptr1 = &value;


    // Directly accessing ptr will give us an address
    printf("1: %p\n", ptr);
    printf("2: %p\n", ptr1);
    printf("3: %p\n", &value);


    return 0;
}