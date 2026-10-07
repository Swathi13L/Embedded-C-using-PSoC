#include<stdio.h>
#include<math.h>

int main()
{
    int a[6] = {10, 20, 30, 40, 50, 60};
    

    for(int i=5; i>=0; i--)
    {
        printf("elements:%d\n",a[i]);
    }
    return 0;
}