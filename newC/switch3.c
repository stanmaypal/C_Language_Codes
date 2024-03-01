#include<stdio.h>
int main()
{
    int data;
    printf("Press 0 For Personal Details:\n");
    printf("Press 1 For Professional Details:\n");
    scanf("%d",&data);
     switch(data)
     {
     case 0:
         printf("I'm Demo");
        break;
     case 1:
         printf("I'm a Developer!");
        break;
     default:
        printf("invalid Data!!");
     }
}
