#include <stdio.h>

int main()
{
    int n;
    printf("Enter the size of the array:");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements of the array:\n", n);

    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int largest = arr[0];
    int smallest = arr[0];
    for(int j=1; j<n; j++)
    {
        if(arr[j] > largest)
        {
            largest = arr[j];
        }
        if(arr[j] < smallest)
        {
            smallest = arr[j];
        }
    }
    printf("The largest element in the array is: %d\n", largest);
    printf("The smallest element in the array is: %d\n", smallest);
    return 0;
}