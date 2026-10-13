
#include <stdio.h>
#include <stdint.h>

struct Sensor
{
    uint8_t id;
    float temperature;
    uint8_t alert;
};

int main(void)
{
    struct Sensor sensors[3] = {
                               {1, 30.0, 0},
                               {2, 38.5, 0},
                               {3, 35.0, 0}
};
for(int i=0;i<3;i++)
{
    if(sensors[i].temperature >35.0f)
    {
        sensors[i].alert=1;
    }
    else
    {
        sensors[i].alert=0;
    }

printf("Sensor ID: %d\n", sensors[i].id);
printf("Temperature: %.1f C\n", sensors[i].temperature);
printf("Alert: %d\n", sensors[i].alert);
}
    return 0;
}
