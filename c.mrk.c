#include <stdio.h>
int main ()
{
    int marks;
    printf("enter marks:");
    scanf("%d",&marks);
    if(marks>=90)
    {
        printf("grade A");
    }
    else if (marks>=75)
    {
        printf("Grade B");
    }
    else if (marks>=60)
    {
        printf("Grade C");
    }
    else if (marks>=40)
    {
        printf("Grade D");
    }
    else
    {
        printf("fail");
    }
    return 0;

}
