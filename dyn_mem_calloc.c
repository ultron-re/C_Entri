#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr = calloc(5, sizeof(int));

    if (ptr == NULL) 
    {
        printf("Memory allocation failed\n");
        return 1; 
    }

    for(int i = 0; i < 5; i++) 
    {
        ptr[i] = i; 
    }

    for(int i = 0; i < 5; i++) 
    {
        printf("%d ", ptr[i]); 
    }
    printf("\n");

    int *temp = realloc(ptr, 10 * sizeof(int)); 
    ptr = temp;

    for(int i = 5; i < 10; i++) 
    {
        ptr[i] = i; 
    }

    for(int i = 0; i < 10; i++) 
    {
        printf("%d ", ptr[i]); 
    }
    printf("\n");

    free(ptr); 
}