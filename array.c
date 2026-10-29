#include <stdio.h>

int main()
{
    int temp[5];
    
    printf("Enter 5 temperatures :\n");

    for(int i=0; i<5; i++)
    {
        scanf("%d", &temp[i]);
    }

    for(int j=0; j<5; j++)
    {
        printf("Temperature %d : %d\n",j, temp[j]);
    }

    return 0;
}