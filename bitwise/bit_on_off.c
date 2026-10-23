
#include<stdio.h>

int main(void)
{
    unsigned char reg=12;

    if(reg & (1u<<2))
    {
        printf("bit is on");
    
    }
else
{
    printf("bit is off");
}
    printf("%hhu\n",reg);   //u is unsigned int cause its number


    return 0;
}