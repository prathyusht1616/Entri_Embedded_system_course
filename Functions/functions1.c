/*
Function must require
1. Declaration
2. Definition
3. Call

syntax: 
return_type function_name(parameters or arguments)
{
function_body
return;
}

    4 Types of Functions 
        1.no reurn type,  no arguments
        2.no reurn type,  arguments
        3.reurn type,  arguments
        4.return type, no arguments
*/
// This Program Function has no "arguments and no return type"
#include <stdio.h>

//function declaration
void Helloworld();  //no arguments and no reurn type

int main()  // main also a function
{ 
    //Function call
    Helloworld(); 
    return 0;
}

//function definition
void Helloworld() 
{
printf("Hello World!\n");
}