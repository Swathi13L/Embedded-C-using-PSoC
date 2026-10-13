#include<stdio.h>
#include<stdint.h>
struct GPIO
{
    uint8_t pin;
    uint8_t buttonstate;
    uint8_t ledstate;
};
int main()
{
   struct GPIO pin1={2,1,0};

    if(pin1.buttonstate==1)
    {
pin1.ledstate=1;
    }
    else
    {
pin1.ledstate=0;
    }
    printf("pin :%u\n",pin1.pin);
    printf("ledstate:%u\n",pin1.ledstate);
    return 0;
}


