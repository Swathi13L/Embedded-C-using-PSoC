#include<stdio.h>

int main(void)
{
    unsigned char reg = 0b00101100;

    reg=reg | (1u<<0)|(1u<<3);
    reg=reg & ~(1u<<2);

    printf("%hhu\n",reg);

    return 0;

}


//Turn ON bits 0 and 3
//Turn OFF bit 2
//Preserve all other bits