#include <stdio.h>
int main ()
{
    int password;
    printf("enter password:");
    scanf("%d",&password);
    if(password == 226900)
    {
        printf("login successfull");
    }
    else
    {
        printf("incorrect password");
    }
    return 0;

}

