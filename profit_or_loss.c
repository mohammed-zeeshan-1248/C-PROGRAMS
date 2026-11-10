#include <stdio.h>
int main()
{

    int cost,sell;

    printf("Enter cost price:");
    scanf("%d",&cost);
    printf("Enter selling price:");
    scanf("%d",&sell);
    if (sell==
        cost)
    {
        printf("No profit");
    }
    else if (sell>cost)
    {
        printf("Profit");
    }
    else
    {
        printf("Loss");
    }
    return 0;
}

