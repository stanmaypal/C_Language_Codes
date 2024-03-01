#include<stdio.h>
int main()
{
    int age;
    printf("Enter your Age:");
    scanf("%d",&age);
    if(age>=18 && age<100)
    {
        printf("%d GoodLuck!",age);
    }
    else
    {
        printf("%d Fine 25000",age);
    }
}
