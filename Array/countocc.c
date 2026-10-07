#include <stdio.h>

int main()
{
    int a[] = {2, 5, 2, 8, 2, 3, 5, 9,2,2,3};
    int i;
    int count = 0;

    for(i = 0; i < 10; i++)
    {
        if(a[i] == 2)
        {
            count++;
        }
    }

    printf("2 occurs %d times\n", count);

    return 0;
}