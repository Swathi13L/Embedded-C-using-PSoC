#include<stdio.h>

enum led_state
{
    led_off,
    led_on,
    led_blink
};

int main(void)
{
    enum led_state led;
    led=led_on;

    switched(led)
    {
        case led_off:
        printf("led is off\n");
        break;

         case led_on:
        printf("led is on\n");
        break;

        case led_blink:
        printf("led is blinking\n");
        break;

        default:
        printf("led is off\n");
        break;

    }

    while(1)
    {
        continuosly
    }
}

