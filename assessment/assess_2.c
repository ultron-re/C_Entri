/* you are given an 8 bit register as an unsigned char. 
write a function to:
Set the third bit index 2
clear the 6th bit 
toggle the 1st bit
return the modified register value. Use bitwise operators only avoid loops 
*/

#include <stdio.h>

unsigned char modify(unsigned char reg)
{
    reg = reg | (1<<2);
    reg = reg & ~(1<<5);
    reg = reg ^ 1;

    return reg;
}

int main()
{
    unsigned char reg =35; 


    printf("Register value before modification : %u\n", reg);
    reg = modify(reg);
    printf("Register value after modification : %u\n", reg);
}


