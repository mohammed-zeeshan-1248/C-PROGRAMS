#include<stdio.h>
void main()
{
    int i,n;
    printf("enter any +ve no:");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {
        printf("%dx%d=%d\n",n,i,i*n);
    }



}
