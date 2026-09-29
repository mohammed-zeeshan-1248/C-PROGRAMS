#include <stdio.h>
int main()
{
    int age;
    printf("Enter your age :");
    scanf("%d", &age);  //address-of operator &

    printf("Your age is : %d", age);
    return 0;

}
