#include<stdio.h>

int main()
{
    int age=22;
    int *ptr=&age;

//just to check the address
printf("%p\n",&age);

//to get the address in integer format ,so it will be easy to understand
printf("%u\n",&age);   //same
printf("%u\n",ptr);    //same
printf("%u\n",&ptr);  //diff


return 0;
}