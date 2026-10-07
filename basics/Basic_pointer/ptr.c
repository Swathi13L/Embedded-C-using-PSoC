#include<stdio.h>
int main()
{
    int x;
    int *ptr;

    ptr=&x;
    *ptr=0;

    printf("x=%d\n",x); //0
    printf("*ptr=%d\n",*ptr);       //0

    *ptr +=5;
    printf("x=%d\n",x);    //0+5=5
    printf("*ptr=%d\n",*ptr);   //5

    (*ptr)++;         5++=6
    printf("x=%d\n",x);     //6
    printf("*ptr=%d\n",*ptr);    //6

    return 0;
}