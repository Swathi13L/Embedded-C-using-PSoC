
#include <stdio.h>

int main(void)
{
    unsigned char reg = 0b10101101;

    unsigned char result = reg & 0x0F;

    printf("%hhu\n", result);

    return 0;
}
