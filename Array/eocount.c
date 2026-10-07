#include<stdio.h>
#include<math.h>

int main()
{
    int a[8] = {12, 7, 45, 8, 23, 10, 6, 31};
    int i;
    int even=0;
    int odd=0;
    int count=0;

    for(i=0;i<8;i++)
    {
    printf("enter the array position :%d\n",a[i]);
    if(a[i]%2==0)
    {
        even++;
    }
    if(a[i]%2!=0)
    {
        odd++;
    }
    }


    printf("total number of even numbers=%d",even);
    printf("total number of odd numbers=%d",odd);
    return 0;

}
