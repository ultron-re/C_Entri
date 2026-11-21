#include <stdio.h>
#include <string.h>

typedef struct {
    int day;
    int month;
    int year;
} Date;

struct Employee {
    char name[50];
    int id;
    Date join_date; 
};

void print_data(char name[], int id, int day, int month, int year)
{
    printf("Employee Name: %s\n",name);
    printf("Employee ID: %d\n", id);
    printf("Employee Join Date: %d/%d/%d\n", day, month, year);
}

int main()
{
    struct Employee E1 = {"Rahul", 123, {15, 8, 2020}};
    struct Employee *e1_ptr = &E1;

    print_data(E1.name, E1.id, E1.join_date.day, E1.join_date.month, E1.join_date.year);

}