#include<stdio.h>
#include<string.h>

int main()
{
    char str[50];
    int i=0,c_digit=0,c_alpha=0;
    
    printf("Enter string:");
    scanf("%[^\n]", str);

    while(str[i]!='\0')
    {
        if(str[i] >= 48 && str[i] <= 57)
        {
            c_digit ++;
        }
        else if((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122))
        {
            c_alpha++;
        }
        i++;
    }

    printf("The number of digits in the string : %d\n",c_digit);
    printf("The number of alphabets in the string : %d\n",c_alpha);

    return 0;

    
}