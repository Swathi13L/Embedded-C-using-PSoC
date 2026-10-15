
#include <stdio.h>

enum TrafficLight
{
    RED,
    YELLOW,
    GREEN
};

int main()
{
    enum TrafficLight signal;

    signal = GREEN;

    printf("%d", signal);

    return 0;
}
