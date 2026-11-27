#include <stdio.h>

int sort(int *arr, int n)
{
    int lar = arr[0], sec_lar ;

    for(int i=1;i<n;i++)
    {
        if(lar < arr[i])
        {
            sec_lar = lar;
            lar = arr[i];
        }
        else if((arr[i]>sec_lar ) && (arr[i]!=lar))
        {
            sec_lar = arr[i];
        }
    }
    return sec_lar;
}
int main()
{
    int n;
    printf("Enter the size of the array : ");
    scanf("%d",&n);
    int arr[n];
    for(int i = 0; i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int sec_lar;
    sec_lar = sort(arr,n);
    printf("Second largest number is : %d\n",sec_lar);
}