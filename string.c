#include <stdio.h>
#include <string.h>

int main()
{
    char name[50];

    printf("Enter your name: ");
    scanf("%[^\n]", name);
    
    printf("Your name is: %s\n", name);
    int  i=0;
     while (name[i] != '\0' )
    {
        i++;
    }

    printf("The length of the name is: %d\n", i);
    return 0;
}