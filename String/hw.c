//1. find about fgets() - and how  
#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    int length;

    printf("Enter a string: ");
    // fgets(str, sizeof(str), stdin); // Using fgets to read a string with spaces   
    length = strlen(str);

    printf("Length of the string = %d", length);
    return 0;
}