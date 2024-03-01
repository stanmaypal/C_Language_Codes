#include<stdio.h>
int main()
{
    int pt;
    printf("Enter the 1st Level POint :");
    scanf("%d",&pt);
    if(pt>=15 && pt<25)
    {
        printf("Welcome to 2nd Level\n");
        printf("Enter the 2nd Level POint :");
        scanf("%d",&pt);
        if(pt>=25 &&pt<35)
        {
          printf("Welcome to 3rd level\n");
          printf("Enter 3rd Level Point");
          scanf("%d",&pt);
          if(pt>= 35 && pt<45)
          {
             printf("You Won the Game\n");

          }
          else{
            printf("Failed 3rd Level");
          }
        }
        else
            {
            printf("Failed Level 2nd");
            }

    }
    else{
        printf("Failed Level 1");
    }
}
