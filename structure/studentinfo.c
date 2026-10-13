#include <stdio.h>

struct student
{
    int id;
    float marks;
    int status;
};

int main()
{
    struct student student1 = {101, 85.5, 1};
    struct student student2 = {102, 42.0, 1};

    printf("Student 1: ID = %d, Marks = %.1f\n",
           student1.id, student1.marks);

    if(student1.marks >= 50)
    {
        printf("Result: Pass\n\n");
    }
    else
    {
        printf("Result: Fail\n\n");
    }

    printf("Student 2: ID = %d, Marks = %.1f\n",
           student2.id, student2.marks);

    if(student2.marks >= 50)
    {
        printf("Result: Pass\n");
    }
    else
    {
        printf("Result: Fail\n");
    }

    return 0;
}




