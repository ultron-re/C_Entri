#include  <stdio.h>
#include <stdlib.h>

int main()
{
    //void pointer example
    int value = 25;
    void *ptr = &value; // void pointer pointing to an integer
    printf("Value: %d\n", *(int *)ptr); // Cast void pointer to int pointer and dereference
    
    //null pointer example
    int *null_ptr = NULL; // Null pointer
    printf("Null pointer: %p\n",null_ptr); // Print null pointer address
    
    //wild pointer example
    int *wild_ptr1; // Wild pointer (uninitialized)
    printf("Wild pointer: %p\n", wild_ptr1); // Print wild pointer address

    //dangling pointer example
    int *d_ptr = malloc(4); // Dangling pointer (uninitialized)
    if (d_ptr != NULL) 
    {
        *d_ptr = 10; // Assign value to allocated memory
        printf("Dangling pointer: %d\n", *d_ptr); // Print dangling pointer value
        free(d_ptr); // Free allocated memory
        d_ptr = NULL; // Set pointer to NULL after freeing
    }
    return 0;
}