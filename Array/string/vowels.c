#include<stdio.h>
int main()
{
int count=0;
char w[100];

printf("%s enter any word:\n",w);
scanf("%s", w);

 for(int i = 0; w[i] != '\0'; i++)
 {
 if(w[i] == 'a' || w[i] == 'e' || w[i] == 'i' || w[i] == 'o' || w[i] == 'u')
{
count++;
}
 }
printf("no of counter:%d\n",count);

return 0;
}