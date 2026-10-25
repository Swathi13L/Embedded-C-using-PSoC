
#include <stdio.h>

int main(void)
{
    int water_level = 2;

    if (water_level < 1 || water_level > 3)
    {
        printf("SENSOR ERROR\n");
        printf("PUMP OFF\n");
    }
    else if (water_level == 1)
    {
        printf("LOW WATER - RED LED ON\n");
        printf("PUMP ON\n");
    }
    else if (water_level == 2)
    {
        printf("MEDIUM WATER - YELLOW LED ON\n");
        printf("PUMP OFF\n");
    }
    else
    {
        printf("TANK FULL - GREEN LED ON\n");
        printf("PUMP OFF\n");
    }

    return 0;
}
