#include<stdio.h>

int main()
{
    int n;
    printf("Enter the size of the array :");
    scanf("%d",&n);

    int arr[n];
    int lar=0, small;
    printf("Enter the array :\n");

    for(int i =0; i<n; i++)
    {
        scanf("%d",&arr[i]);
        if(i==0)
        {
            small = arr[i]; 
        }
        if(arr[i]>lar)
        {
            lar = arr[i]; 
        }
        else if(arr[i]<small)
        {
            small = arr[i];
        }
    }
    printf("The largest number in the array is: %d\n",lar);
    printf("The smallest number in the array is: %d\n",small);

    return 0;
}