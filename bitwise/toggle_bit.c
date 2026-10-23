#include<stdio.h>

int main(void)
{
    unsigned char reg=10;

    reg=reg^(1u<<1);

    printf("%u",reg);   //u is unsigned int cause its number


    return 0;
}

// 10 in decimal is 0000 1010
//pos 1=1:          0000 0010
//xor both gives :  0000 1000

//ans is 8 