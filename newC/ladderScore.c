#include<stdio.h>
int main()
{
    int sc;
    printf("Enter the First Level Score:");
    scanf("%d",&sc);
    if(sc>=10&&sc<=20)
    {
        printf("Welcome to Second Level!!\n\a");

        printf("Enter the Second Level Score:");
        scanf("%d",&sc);
        if(sc>=30&&sc<=50)
        {

        printf("Welcome to Third Level!!\n");
        printf("Enter the Third Level Score:");
        scanf("%d",&sc);
        if(sc>=50&&sc<=70)
        {
         printf("You Won the Game!!");
        }
        else
        {
            printf("Try Again!!");
        }

        }
        else
        {
            printf("Try Again!!");
        }

    }
    else
    {
        printf("Try Again!!");
    }
}
