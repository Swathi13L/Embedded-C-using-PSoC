#include<stdio.h>

struct sensor
{
    int id;
    float temperature;
    int status;
};

int main()
{
    struct sensor s1={1,28.7,1};
    struct sensor s2={2,30.5,0};


    printf("sensor 1:%d %.1f %d\n",s1.id,s1.temperature,s1.status);
    printf("sensor 2:%d %.1f %d\n",s2.id,s2.temperature,s2.status);

    return 0;
}