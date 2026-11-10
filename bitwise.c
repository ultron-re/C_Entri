#include <stdio.h>

int main() {
    int a = 10;  
    int b = 3;  
    int c;

    c = a & b;  // AND
    printf("a & b = %d\n", c);

    c = a | b;  // OR
    printf("a | b = %d\n", c);

    c = a ^ b;  // XOR
    printf("a ^ b = %d\n", c);

    c = ~a;     // NOT
    printf(" ~a  =  %u\n", c);

    c = a << 1; // Left shift
    printf("a << 1 = %d\n", c);

    c = a >> 1; // Right shift
    printf("a >> 1 = %d\n", c);

    return 0;
}