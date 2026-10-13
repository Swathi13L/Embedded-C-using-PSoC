#include<stdio.h>
#include<stdint.h>

struct sensor{
    uint8_t id;
    float temperature;
    uint8_t priority;
};

int main(void)
{
struct sensor temp[4]={
    {1,28.0,0},{2,42.5,0},{3,36.0,0},{4,50.0,0}
};
for(int i=0;i<4;i++)
{
    if(temp[i].temperature>40.0)
    {
        temp[i].priority=2;
    }
    else if(30.0 < temp[i].temperature > 40.0)
    {
        temp[i].priority=1;
    }
    else
    {
    temp[i].priority=0;
    }


printf("ID: %u\n", temp[i].id);
printf("Temperature: %.1f C\n", temp[i].temperature);
printf("priority: %u\n", temp[i].priority);
}
    return 0;
}