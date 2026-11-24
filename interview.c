/*
#include<stdio.h>

int main() 
{
    printf("%x\n", -1>>1);
    return 0; 
}
Gets- ffff


#include<stdio.h>

int main()
{
    unsigned int m = 32;
    printf("%x\n", ~m);
    return 0;
}
gets - ffdf

#include<stdio.h>

int main()
{
    printf("%x\n", -1<<3);
    return 0;
}

gets - fff8


#include<stdio.h>

int main()
{
    unsigned int a=0xffff;
    ~a;
    printf("%x\n", a);
    return 0;
}

gets - ffff

#include<stdio.h>

int main()
{
    unsigned char i = 0x80;
    printf("%d\n", i<<1);
    return 0;
}

gets - 256 (evn though it char and 8 bits. it does not give error because it is promoted to int before shifting)


#include <stdio.h>

int main()
{
    unsigned char a = 200;
    unsigned char b = 100;


    
    printf("%d\n", a + b );

    return 0;
}

//gets - 300 (even though it is unsigned char and 8 bits, it does not give error because it is promoted to int before addition)


#include<stdio.h>

int main()
{
    int i=3,*j,k;
    j=&i;
    printf("%d \n",i**j*i+*j);
    return 0;
}

gets - 3*3*3+3 = 27 + 3 = 30
*/
