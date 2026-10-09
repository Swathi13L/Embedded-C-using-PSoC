
#include <stdio.h>
int main()
{
char str[] = "I love embedded C";
int count = 0;
for(int i = 0; str[i] != '\0'; i++)
{
if(str[i] == ' ')
{
count++;
}
}
printf("Number of spaces = %d", count);
return 0;
}
