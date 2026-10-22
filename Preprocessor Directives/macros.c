#include <stdio.h>

int main(void)
{
    printf("File: %s\n", __FILE__);  //name of vurrent source file
    printf("Line: %d\n", __LINE__);  //line no.
    printf("Date: %s\n", __DATE__);  //date
    printf("Time: %s\n", __TIME__);  //time

    return 0;
}