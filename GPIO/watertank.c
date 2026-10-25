#include<stdio.h>
int main(void)
{
    int water_level=2;
    if(water_level==1)
    {
        printf("LOW WATER - RED LED ON");
    }
    else if(water_level==2)
    {
        printf("MEDIUM WATER - YELLOW LED ON");
    }
    else
    {
       printf("TANK FULL - GREEN LED ON"); 
    }

    return 0;
}
