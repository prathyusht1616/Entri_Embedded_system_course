#include <stdio.h>

int main()
{
    printf("5 & 3 : %d\n", 5 & 3); // AND operation
    printf("5 | 3 : %d\n", 5 | 3); // OR operation
    printf("5 ^ 3 : %d\n", 5 ^ 3); // XOR operation
    printf("0 after ~0 : %u\n", ~0);       // NOT operation 
    printf("4294967295 after ~4294967295 : %u\n", ~4294967295);   
       
    //Left Shift operation
    printf("1 << 5 :%d\n", 1 << 5); // 32
    printf("8 << 4 :%d\n", 8 << 4); // 128
    printf("5 << 3 :%d\n", 5 << 3); // 40
    printf("3 << 7 :%d\n", 3 << 7); // 384

    //Right Shift operation
    printf("32 >> 3 :%d\n", 32 >> 3); // 4  
    printf("128 >> 4 : %d\n", 128 >> 4); // 8
    printf("40 >> 3 : %d\n", 40 >> 3); // 5
    printf("384 >> 7 : %d\n", 384 >> 7); // 3

    return 0;
}
// 0000 0001 << 5 : 0010 0000 = 32
// 32 = 2^5 * 1  (2 raised to the power of 5 multiplied by 1)
// 0000 1000 << 4 : 1000 0000 = 128
// 128 = 2^4 *8
// 0000 0101 << 3 : 0010 1000 = 40
// 40 = 2^3 * 5 
// 0000 0011 << 7 : 0001 1000 0000
// 384 = 2^7 * 3 
// x << y = z
// z = 2^y * x 

// Right Shift operation 
// 0010 0000 >> 3 : 0000 0100 = 4
// 4 = 32 / 2^3   (32 diveded by 2^3)
// 1000 0000 >> 4 : 0000 1000 = 8
// 8 = 128 / 2^4    
// 0010 1000 >> 3 : 0000 0101 = 5
// 5 = 40 / 2^3
// 0001 1000 0000 >> 7 : 0000 0011 = 3
// 3 = 384 / 2^7
// x >> y = z
// z = x / 2^y

    
