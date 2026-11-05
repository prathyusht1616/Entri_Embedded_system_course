/*
Bitwise Operators
- AND Operation (&)
- OR Operation (|)
- XOR Operation (^)
- NOT Operation (~)    
- Left Shift Operation (<<)
- Right Shift Operation (>>)
===========================
AND Operation (&)
A  B  C
0 0  0
0 1  0
1 0  0
1 1  1

5: 0101
3: 0011 
5 & 3 = 0001 = 1

0 & x = 0   x= 0 or 1
1 & x = x   x= 0 or 1
===========================
OR Operation (|)
A  B  C
0 0  0
0 1  1
1 0  1
1 1  1

5: 0101
3: 0011
5 | 3 = 0111 = 7

1 | x = 1   x= 0 or 1
0 | x = x   x= 0 or 1
============================
XOR Operation (^)
A  B  C
0 0  0 ---- output is 0 when both bits are same
0 1  1
1 0  1
1 1  0

5: 0101
3: 0011
5 ^ 3 = 0110 = 6
============================
NOT Operation (~)
A  C
0  1
1  0

0 -> 0000 0000 -------- 0000 0000
? -> 1111 1111 -------- 1111 1111 -4294967295
=============================
Left Shift Operation (<<)
1 : 0000 0001
1 << 3 : 0000 1000 = 8
// 8 = 2^3 1 * 2^3 

0000 0101 << 4 -> 0101 0000 = 80
=============================
Right Shift Operation (>>)
32  0010 0000 >> 3 : 0000 0100 = 4
// 4  32 :  4 * 2^3
*/
#include <stdio.h>

int main()
{
    int a = 5; // Binary: 0101
    int b = 3; // Binary: 0011
    printf("5 & 3 : %d\n", 5 & 3); // AND operation
    printf("5 | 3 : %d\n", 5 | 3); // OR operation
    printf("5 ^ 3 : %d\n", 5 ^ 3); // XOR operation
    printf("0 after ~0 : %u\n", ~0);       // NOT operation 
    printf("4294967295 after ~4294967295 : %u\n", ~4294967295);       // NOT operation
 
    printf("1 << 3 : %d\n", 1 << 3);  // Left shift operation
    printf("32 >> 3 : %d\n", 32 >> 3); // Right shift operation

    printf("a & b = %d\n", a & b); // AND operation
    printf("a | b = %d\n", a | b); // OR operation
    printf("a ^ b = %d\n", a ^ b); // XOR operation
    printf("~a = %d\n", ~a);       // NOT operation

    printf("a << 1 = %d\n", a << 1); // Left shift operation
    printf("a >> 1 = %d\n", a >> 1); // Right shift operation

    return 0;
}