#include<stdio.h>
int main()
{
int Z[7];
printf("ENTER THE 7DIGITS:");
for (int i=0;i<7;i++)
    scanf("%d",&Z[i]);
printf("displaying integers:");
for (int i=0;i<7;i++)
    printf("%d\n",Z[i]);
return 0;
}
