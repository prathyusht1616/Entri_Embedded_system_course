#include <stdio.h>
int main()
{
    int value =100;
    int *ptr = &value;
    int **ptr1 = &ptr;

    printf("%d\n", value); //100
    printf("value");


    return 0;
}