#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student{
    char name[50];
    char major[50];
    int age;
    double gpa;
};

int main(){

    struct Student student1;

    student1.age = 22;
    student1.gpa = 3.2;
    strcpy(student1.name, "Steve");
    strcpy(student1.major, "Computer Science");

    printf("%f\n", student1.gpa);
    printf("%s\n", student1.name);
    printf("%s\n", student1.major);

    return 0;
}