#include <stdio.h>

typedef struct {
    int id;
    char grade;
    float percentage;
    int total_score;
} Student;

int main ()
{
    Student s1 ;
    Student *ptr = &s1;

    ptr->id = 1122;
    ptr->grade = 'A';
    ptr->percentage = 85.5;
    ptr->total_score = 450;

    printf("Student ID: %d\n", s1.id);
    printf("Student Grade: %c\n", (*ptr).grade);
    printf("Student Percentage: %f\n", ptr->percentage);  
    printf("Student Total Score: %d\n", ptr->total_score);

}


