#include<stdio.h>
int main()
{
int year;
printf("Give a Year :");
scanf("%d",&year);
if(year%4==0)
{
    printf("%d ,Year is Leap Year",year);
}
else
{
     printf("%d ,Year is not Leap Year",year);
}
}
