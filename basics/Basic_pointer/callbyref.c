#include<stdio.h>

void square(int n); 
void _square(int *n);      //function declare

int main()
{
    int number=4;
    square(number);
    printf("number is:%d\n",number);

_square(&number);
printf("number is :%d",number);


    return 0;
}
//call by value
void square(int n)          //function defination
{
    n=n*n;
    printf("square value is:%d\n",n);
}

void _square(int *n)          //function defination
{
    *n=(*n)*(*n);          //4=4*4------>16=4*4

    printf("square value is:%d\n",*n);
}


//square value is:16
//number is:4
//square value is:16
//number is :16

