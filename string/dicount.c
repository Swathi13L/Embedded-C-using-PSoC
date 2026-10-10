
#include <stdio.h>
int main()
{
char str[] = "abc123de45";
int  count = 0;
for(int i = 0; str[i] != '\0'; i++)
{
if(str[i] >= '0' && str[i] <= '9')
{
count++;
}
}
printf("Number of digits = %d", count);
 return 0;
}