#include <stdio.h>
int main ()
{
    int i,n,j,count;
    printf("ENTER THE VALUES OFn:");
    scanf("%d",&n);
    printf("prime number between 1 and %d are :\n",n);
    for(i=2;i<=n;i++)
    {
        count=0;
        for(j=1;j<=i;j++)
        {
        if(i%j==0)
        {
            count++;
        }
    }
    if (count ==2)
    {
        printf("%d",i);
    }
    }
    return 0;
    }



