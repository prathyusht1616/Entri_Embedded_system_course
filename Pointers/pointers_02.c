/*Pointers in C

In Pointers variable used for store address
Pointer: An object used to store the address of another object or variable 
Syntax: data_type *pointer_name; ---> declaration (eg: float *temperature_ptr;)
        pointer_name = &variable_name;  ---> defining (eg: temperature_ptr = &temperature;)

        example: int *ptr;
        -  ptr : address stored in ptr
        - *ptr : the object value accessed through ptr
        - &ptr : address of the ptr
*/
#include <stdio.h>
int main()
{
    float temperature =99.98; // in celsius (c)
    //printing the adress of variable 'temperature' - & | format specifier for address: %p
    printf("Address using &: %p\n", &temperature); //using & operator
    printf("Temperature in Celcius: %.2f C\n\n", temperature); //

    float *temperature_ptr;
    temperature_ptr = &temperature;
    printf("Address using pointer: %p\n", &temperature_ptr); //using a pointer
    printf("Temperature in Celcius: %.2f C\n", temperature_ptr); //just print 
    printf("Temperature in Celcius: %.2f C\n", *temperature_ptr); //*temperature_ptr means enter inside '*' dereference
    if (temperature_ptr == &temperature)
    {
        printf("both address are same!!\n");
    }
    return 0;
    //

}