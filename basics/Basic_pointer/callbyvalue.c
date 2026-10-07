#include<stdio.h>

void square(int n);       //function declare

int main()
{
    int number=3;
    square(number);
    printf("number is:%d\n",number);
    return 0;
}
//call by value
void square(int n)          //function defination
{
    n=n*n;
    printf("square value is:%d\n",n);

}


// square value:9
//number is :3