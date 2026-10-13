
#include <stdio.h>
#include <stdint.h>

struct sensor
{
    uint8_t id;
    float temperature;
    uint8_t alert;
};

int main(void)
{
    struct sensor sensor1 = {1, 38.5f, 0};
    struct sensor sensor2 = {2, 43.9f, 0};

    if(sensor1.temperature > 35.0f)
    {
        sensor1.alert = 1;
    }
    else
    {
        sensor1.alert = 0;
    }

    if(sensor2.temperature > 35.0f)
    {
        sensor2.alert = 1;
    }
    else
    {
        sensor2.alert = 0;
    }

    printf("Sensor ID: %u\n", (unsigned)sensor1.id);
    printf("Temperature: %.1f\n", sensor1.temperature);
    printf("Alert: %u\n", (unsigned)sensor1.alert);

    printf("Sensor ID: %u\n", (unsigned)sensor2.id);
    printf("Temperature: %.1f\n", sensor2.temperature);
    printf("Alert: %u\n", (unsigned)sensor2.alert);

    return 0;
}
