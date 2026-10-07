#include<stdio.h>
int main()
{
    char str[]="hello";
    int count=0;
    int i=0;

    while(str[i]!='\0')
    {
        count++;
        i++;
    }
    printf("length of string is:%d\n",count);
}