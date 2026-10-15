
#include <stdio.h>

enum MachineState
{
    IDLE,
    RUNNING,
    ERROR
};

int main()
{
    int state;

    printf("Enter machine state (0=IDLE, 1=RUNNING, 2=ERROR): ");
    scanf("%d", &state);

    if (state == IDLE)
    {
        printf("Machine is Idle");
    }
    else if (state == RUNNING)
    {
        printf("Machine is Running");
    }
    else if (state == ERROR)
    {
        printf("Machine has an Error");
    }
    else
    {
        printf("Invalid state");
    }

    return 0;
}
