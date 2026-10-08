#include <stdio.h>
int main()
{
    char w[100];
    int i, valid = 0;
    printf("Enter sensor data: ");
    scanf("%s", w);
    for(i = 0; w[i] != '\0'; i++)
    {
        if(w[i] >= '0' && w[i] <= '9')  //assume data is between 0 - 9
        {
            valid=0;
            break;
        }
    }
    if(valid==1)
    
        printf("valid sensor data\n");
    else
         printf("invalid sensor data\n");
        
        return 0;
    }