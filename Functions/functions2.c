/*
4 Type Functions
    1.no reurn type,  no arguments
    2.no reurn type,  arguments
    3.reurn type,  arguments
    4.return type, no arguments
*/
// This Program Function has "no return type but arguments"
#include <stdio.h>

void sum(int, int); 

int main(void)  
{ 
    sum(5, 10); 
    return 0;
}
void sum(int a, int b)
{
printf("sum = %d\n", a + b);
}