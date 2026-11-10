#include<stdio.h>
int main()
{
int Z[2][3],C[2][3],X[2][3],i,j;
printf("enter values of Z:");
    for (int i=0;i<2;i++)
    for (int j=0;j<3;j++)
        scanf("%d",&Z[i][j]);

printf("enter values of X:");
    for (int i=0;i<2;i++)
    for (int j=0;j<3;j++)
        scanf("%d",&X[i][j]);

        for (int i=0;i<2;i++)
        {
    for (int j=0;j<3;j++)
        C[i][j]=C[i][j]+Z[i][j]-X[i][j];

        }
    printf("substaction=\n");
    for (int i=0;i<2;i++)
    {

    for (int j=0;j<3;j++)
        printf("%d\t",C[i][j]);
    printf("\n");
    }
}



