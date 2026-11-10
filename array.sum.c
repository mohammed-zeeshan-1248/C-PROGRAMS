#include<stdio.h>
int main()
{
int Z[5],sum;

    sum=0;
    printf("enter 5 values;");
    for (int i=0;i<5;i++)
        scanf("%d",&Z[i]);
    for (int i=0;i<5;i++)
        sum=sum+Z[i];
    printf("sum=%d",sum);
}

