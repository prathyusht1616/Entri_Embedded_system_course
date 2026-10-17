/*SWAP TWO NUMBERS USING FUNCTIONS*/
#include <stdio.h>

void swap(int *aptr, int *bptr)
{
    //swapping should happen here! method - pass by reference
    int temp = *aptr; //temp holds value of a
    *aptr = *bptr; //aptr got updated with bptr value
    *bptr = temp; //bptr got updated with temp value
}


int main()
{
    int a = 10;
    int b = 12;
    //after swap : a = 12 and b = 10;
    printf("Before swap\n a = %d and b = %d\n", a,b);
    swap(&a, &b);
    printf("After swap\n a = %d and b = %d\n", a, b);
}