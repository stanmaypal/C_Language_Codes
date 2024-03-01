#include<stdio.h>
int main()
{
    int day;
    printf("Input a no:");
    scanf("%d",&day);

    switch(day)
    {
    case 1:
        printf("Sunday");
        break;
    case 2:
        printf("Monday");
        break;

    default:
        printf("invalid");
    }
}
