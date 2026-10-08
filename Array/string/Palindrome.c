#include <stdio.h>
int main()
{
    char w[100];
    int i, len = 0;
    printf("Enter a word: ");
    scanf("%s", w);
    for(i = 0; w[i] != '\0'; i++)
    {
    len++;
    }
    for(i = 0; i < len / 2; i++)
    {
    if(w[i] != w[len - 1 - i])
    {
        printf("Not palindrome");
        return 0;
    }
}
printf("Palindrome");
return 0;
}