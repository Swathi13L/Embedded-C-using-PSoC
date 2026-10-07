#include <stdio.h>
#include <string.h>

struct Student
{
    char name[20];
    char usn[20];
    int score;
};

int main()
{
    struct Student student[4] =
    {
        {"Anu",  "USN01", 78},
        {"Ravi", "USN02", 45},
        {"Maya", "USN03", 82},
        {"John", "USN04", 38}
    };

    int choice;
    int i;
    int sum;
    float average;

    while(1)
    {
        printf("\n==============================\n");
        printf(" STUDENT INFORMATION SYSTEM\n");
        printf("==============================\n");
        printf("1 - SW1: Calculate Average\n");
        printf("2 - SW2: Calculate Sum\n");
        printf("3 - SW3: Find names containing 'a'\n");
        printf("4 - SW4: Students scoring below 50\n");
        printf("0 - Exit\n");
        printf("==============================\n");

        printf("Enter switch number: ");
        scanf("%d", &choice);

        if(choice == 1)
        {
            sum = 0;

            for(i = 0; i < 4; i++)
            {
                sum = sum + student[i].score;
            }

            average = sum / 4.0;

            printf("\nAverage Score = %.2f\n", average);
        }

        else if(choice == 2)
        {
            sum = 0;

            for(i = 0; i < 4; i++)
            {
                sum = sum + student[i].score;
            }

            printf("\nSum of Scores = %d\n", sum);
        }

        else if(choice == 3)
        {
            printf("\nStudents whose name contains 'a':\n");

            for(i = 0; i < 4; i++)
            {
                if(strchr(student[i].name, 'a') != NULL ||
                   strchr(student[i].name, 'A') != NULL)
                {
                    printf("%s\n", student[i].name);
                }
            }
        }

        else if(choice == 4)
        {
            printf("\nStudents scoring below 50:\n");

            for(i = 0; i < 4; i++)
            {
                if(student[i].score < 50)
                {
                    printf("Name: %s\tUSN: %s\n",
                           student[i].name,
                           student[i].usn);
                }
            }
        }

        else if(choice == 0)
        {
            printf("\nProgram ended.\n");
            break;
        }

        else
        {
            printf("\nInvalid switch number!\n");
        }
    }

    return 0;
}