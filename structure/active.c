#include<stdio.h>
struct sensor
{
    int id;
    float temperature;
    int status;
};

int main()
{
    struct sensor s1={1,28.5,0};
    if(s1.status==1)
    {
        printf("sensor is active!");
    }
    else
    {
    printf("sensor is not active");
    }
return 0;
}