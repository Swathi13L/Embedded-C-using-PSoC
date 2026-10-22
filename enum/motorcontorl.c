#include<stdio.h>

enum motor_state
{
    motor_stopped,
    motor_running,
    motor_fault
};

int main(void)
{
    enum motor_state motor;
    motor=motor_running;

    switch(motor)
    {
        case motor_stopped :
        printf("motor is stopped\n");
        break;

         case motor_running :
        printf("motor is running\n");
        break;

        case motor_fault:
        printf("motor is having fault\n");
        break;

        default:
        printf("motor is off\n");
        break;

    }

    
}

