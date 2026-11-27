#include <stdio.h>

int main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);

    int sum = 0;

    while(num>0)
    {
        sum += num%10; 
        num = num/10;
    }

    printf("The sum of the digits: %d\n",sum);
    return 0;
} 