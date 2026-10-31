#include <stdio.h>

//this is out student structure - template
struct Student
{
    //structure members
    char name[20];
    int id;
    char grade;
    float percentage;
};

int main()
{
    struct Student s1 = {"Prathyush T", 8815, 'A', 85.66};  //a memory is created only when a structure variable is created.
    struct Student s2 = {"Ambili T V", 7715, 'A', 95.88};  //a memory is created only when a structure variable is created.
    //to access the member we have . (dot) operator
    printf("------------------------Student Details----------------------------\n");
    printf("STUDENT 1\n");
    printf("Name        : %s\n", s1.name);
    printf("ID          : %d\n", s1.id);
    printf("Grade       : %c\n", s1.grade);
    printf("Percentage  : %.2f\n", s1.percentage);
    printf("STUDENT 2\n");
    printf("Name        : %s\n", s2.name);
    printf("ID          : %d\n", s2.id);
    printf("Grade       : %c\n", s2.grade);
    printf("Percentage  : %.2f\n", s2.percentage);


    return 0;

}