#include<stdio.h>

int main()
{
    int shop=5;
    int ptr=&shop;
    int **pptr=&ptr;
                                   //**pptr stores value of ptr
    printf("%d\n",**pptr);
    
    return 0;


}