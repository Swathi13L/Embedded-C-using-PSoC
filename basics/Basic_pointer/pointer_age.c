//basic program to understand pointer syntax
#include<stdio.h>

int main()
{
    int age=22;
    int *ptr=&age;
int _age=*ptr;
//displays the value in the variable _age
printf("%d",_age);
return 0;
}