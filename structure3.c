#include <stdio.h>
typedef int integer;
typedef struct Student  //
{
    /* data */
    char name[20];  
    int id;  
    char grade; 
    float percentage;  
    double precision;  
}Student;

int main()
{
    integer value = 100;
    printf("value : %d\n", value);
    Student s1 = {"Sai Krishna", 1234, 'A', 98.55};
    printf("Name        : %s\n", s1.name);
    printf("ID          : %d\n", s1.id);
    printf("Grade       : %c\n", s1.grade);
    printf("Percentage  : %.2f\n", s1.percentage);

    return 0;

}