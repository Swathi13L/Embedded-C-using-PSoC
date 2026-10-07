#include<stdio.h>
#include<math.h>

int main()
{
    int a[6]={12, 45, 7, 89, 23, 56};
    int sum =0;
    int i;


    for(i=0;i<6;i++)
    sum=sum+a[i];
printf("the sum of array elemnts is =%d\n",sum);
return 0;
}