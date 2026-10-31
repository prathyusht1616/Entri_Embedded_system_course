/* ---Array in C---
Collection of elements of same datatypes stored in countinous memeory locations.
-   syntax: data_type array_name[size];
-   eg: int temp[10];
-   int datatype
-   temp - array name
-   size
-   total size = number of elements in array x size of data type
int temp1;
int temp2;
.
.
.
.
int temp100;
*/
#include <stdio.h>
 int main()
 {
    int temp[5] = {100, 98, 88, 78, 97}; // size = 20 (5 x 4);
    //what is the starting address of array?  0x1000
    //address of array
    printf("address of array: %p\n", temp);
    //address of first element
    printf("address of first element: %p\n", &temp[0]);
    printf("Size of Array: %zu bytes\n", sizeof(temp)); // sizeof(int)

    for (int i=0; i<5; i++)
    {
        scanf("%d", &temp[i]);
    }
    for (int i=0; i<5; i++)
    {
        printf("Temperature %d: %d, Address : %p\n", i, temp[i],&temp[i]);
    }
    return 0;
    
 }
 //temp[i] = temp + i
 /*
 temp - is holding address of array
 temp = 0x1000  (eg: array address 0x1000)
 temp[1] = temp + 0 = temp +1 x sizeof(int)
        = temp +1 x 4
        = temp + 4
        = 0x1000 + 4 = 0x1004
 */