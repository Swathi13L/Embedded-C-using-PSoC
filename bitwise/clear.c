#include<stdio.h>

int main(void)
{
unsigned char reg=15;
 reg=reg & ~(1u<<3);

 printf("%hhu\n",reg);

 return 0;
}
