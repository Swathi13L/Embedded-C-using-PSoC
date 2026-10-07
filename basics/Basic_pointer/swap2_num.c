#include<stdio.h>

void swap(int a,int b);
int main(){
int x=3, y=8;
swap( x, y);
 
printf("value of x =%d & y=%d\n",x,y);
    return 0;
}

void swap(int a,int b)
{
    int t= a;
    a= b;
    b= t;
    printf("value of a =%d & b=%d\n",a,b);
}

