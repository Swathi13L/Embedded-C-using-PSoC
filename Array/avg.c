#include<stdio.h>
#include<math.h>

int main()
{
    int a[6] = {10, 20, 30, 40, 50, 60};
    int i;
    int sum=0;
    float avg;

    for(i=0;i<6;i++)
    {
        sum=sum+a[i];
        avg=(float)sum/6;
    }
    printf("average of array elements is :%f\n",avg);
    return 0;
}