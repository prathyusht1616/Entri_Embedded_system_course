#include <stdio.h>
int value;
struct Student  //
{
    /* data */
    char name[20];  //20 byte 
    int id;  //4 byte
    char grade; //1 byte + 3 padding
    float percentage;  //4 byte 
    double precision;  //8 byte
};
struct Student2
{
    int id;  //4 byte
    char grade; //1 byte + 3 padding
    float percentage;  //4 byte + 4 padding
    double precision;  //8 byte
};
struct Student3
{
    int id;  //4 byte
    char name; //1 byte + 3 padding
    float percentage;  //4 byte 
    char grade; //1 byte + 3 padding
    double precision;  //8 byte
};
struct Student4  //
{
    /* data */
    char name[7];  //7 byte + 1 padding
    double precision;  //8 byte
    int id;  //4 byte
    char grade; //1 byte + 3 padding
    float percentage;  //4 byte + 4 padding
};

int main()
{
    printf("Structure Size: %zu bytes\n", sizeof(struct Student));  
    printf("Structure Size: %zu bytes\n", sizeof(struct Student2));
    printf("Structure Size: %zu bytes\n", sizeof(struct Student3));
    printf("Structure Size: %zu bytes\n", sizeof(struct Student4));
    printf("Value Size: %zu bytes\n", sizeof(value));
    return 0;

}