#include<stdio.h>
#include<math.h>
int main()
{
int i;
int a[6] = {12, 45, 7, 89, 23, 56};
int largest;
int second;

largest = a[0];
second = a[1];

if(second> largest)
{
int temp =largest;
largest =second;
second =temp;
}
for(i=2;i<6;i++)
{
    if(a[i]> largest)
    {
       second = largest;
            largest = a[i]; 
    }
     else if(a[i] > second)
        {
            second = a[i];
        }
}
printf("largest is =%d\n",largest);
printf("second is =%d\n",second);
return 0;
}