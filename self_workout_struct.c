#include<stdio.h>
#include<string.h>

struct Student
{
    char name[15];
    char grade;
    int mark;
     
};

int main()
{
    struct Student S1 = {"Prathyush", 'A', 55};
    struct Student S2;
    S2.mark = 60;
    S2.grade = 'A';
    strcpy(S2.name, "Ambili");
    printf("Student 1 Name: %s\n",S1.name);
    printf("Student 1 Mark: %d Grade: %c\n\n",S1.mark,S1.grade);
    
    printf("Student 2 Name: %s\n",S2.name);
    printf("Student 2 Mark: %d\n",S2.mark);
    printf("Student 2 Grade: %c\n\n",S2.grade);
    
    printf("Size of Structure: %zu\n",sizeof(struct Student));
}