#include<stdio.h>
int main()
{
    int a[]={12, 45, 7, 89, 23, 56, 10};
 
for(int i = 0; i < 7; i++)
{
    if(a[i] == 23)
    {
        printf("ele 23 is at position = %d\n",i);
    }
}
return 0;
}