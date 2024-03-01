#include<stdio.h>
int main()
{
    int day;
    printf("Enter the Day No:");
    scanf("%d",&day);
     switch(day)
     {
  case 1:
    printf("Sunday");
 break;
 case 2:
    printf("Monday");
 break;
 case 3:
    printf("Tuesday");
 break;
 case 4:
    printf("Wednesday");
 break;


 default:
    printf("Invalid Day No!!");
     }
}
