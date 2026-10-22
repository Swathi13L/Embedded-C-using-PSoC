#include <stdio.h>

#define SQUARE(x) x * x

int main(void)
{
    int result = SQUARE(2 + 3);

    printf("Result = %d\n", result);

    return 0;
}