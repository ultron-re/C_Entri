#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr = (int *)malloc(sizeof(int)); // Allocate memory for an integer

    if (ptr == NULL) // Check if memory allocation was successful
    {
        printf("Memory allocation failed\n");
        return 1; // Exit the program with an error code
    }

    *ptr = 42; // Assign a value to the allocated memory
    printf("Value: %d\n", *ptr); // Print the value stored in the

}