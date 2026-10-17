/*
4 Type Functions
    1.no reurn type,  no arguments
    2.no reurn type,  arguments
    3.reurn type,  arguments
    4.return type, no arguments
*/

// This Program Function has "return type and no arguments"
#include <stdio.h>

int sum();

int main(void)  
{ 
    int value = sum();
    printf("sum = %d\n", value);
    return 0;
}
int sum()
{
return 10;
}