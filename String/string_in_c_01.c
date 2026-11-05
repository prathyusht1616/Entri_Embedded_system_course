#include <stdio.h>
#include <string.h>
//format specifier for string is %s
//%s - prints NULL terminated string

int main()
{
    char name[] = "Prathyush"; //This method only possibble when declaration and initialization are done together
    //updating the size with an extra space for accommodating the null character '\0'
    char name1[8] = "Prathyush"; //This method is possible when declaration and initialization are done separately
    printf("Name: %s", name);
    printf("Name1: %s", name1);
    return 0;
}
