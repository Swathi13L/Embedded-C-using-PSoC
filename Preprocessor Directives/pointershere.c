#include <stdio.h>

int main(void)
{
    int value = 10;
    int *ptr = &value;

    *ptr = 25;

    printf("%d\n", value);

    return 0;
}