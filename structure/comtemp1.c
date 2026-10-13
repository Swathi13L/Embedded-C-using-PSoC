#include<stdio.h>
#include<stdint.h>
struct sensor
{
    uint8_t id;
    float temperature;
    uint8_t alert;
};
int main()
{
struct sensor sensor1={1,38.5,0};
if(sensor1.temperature>35.0)
{
    sensor1.alert=1;
}
else
{
    sensor1.alert=0;
}
printf("Sensor ID: %u\n", (unsigned)sensor1.id);
printf("Temperature: %.1f\n", sensor1.temperature);
printf("Alert: %u\n", (unsigned)sensor1.alert);

return 0;
}