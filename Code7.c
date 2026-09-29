# include <stdio.h>
int main()
{
    int p,t,r;
    printf("Enter period of the year:");
    scanf("%d",&p);
    printf("Enter time:");
    scanf("%f",&t);
    printf("Enter rate:");
    scanf("%d",&r);
    printf("the sipmle intrest is:%d",(p*t*r)/100);
    return 0;
}
