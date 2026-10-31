#include <stdio.h>
#include <string.h> //since we are using strcpy function.

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
    struct Student s1 = {"Prathyush", 8815, 'A', 85.66};  //a memory is created only when a structure variable is created.
    struct Student s2;
    struct Student s3;
    
    //s2.name = "ambili t v " --- shows error
    strcpy(s2.name, "AMBILI T V");
    // strcpy(s3.name, "ASWANTH");
    s2.id = 1234;
    s2.grade = 'B';
    s2.percentage = 99.98;   
    printf("------------------------Student 1 Details----------------------------\n");
    printf("STUDENT 1\n");
    printf("Name        : %s\n", s1.name);
    printf("ID          : %d\n", s1.id);
    printf("Grade       : %c\n", s1.grade);
    printf("Percentage  : %.2f\n", s1.percentage);
    printf("------------------------Student 2 Details----------------------------\n");
    printf("Name        : %s\n", s2.name);
    printf("ID          : %d\n", s2.id);
    printf("Grade       : %c\n", s2.grade);
    printf("Percentage  : %.2f\n", s2.percentage);

    printf("------------------------Student 3 Details----------------------------\n");
    printf("Name        : %s\n", s3.name);
    printf("ID          : %d\n", s3.id);
    printf("Grade       : %c\n", s3.grade);
    printf("Percentage  : %.2f\n", s3.percentage);



    return 0;

}