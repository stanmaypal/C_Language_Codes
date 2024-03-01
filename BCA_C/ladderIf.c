#include<stdio.h>
int main()
{
    float per;
    printf("Enter the Percentage:-");
    scanf("%f",&per);
    if(per>50 && per<100)
    {
        printf("You are selected First Round Try For Second Round!\n");
        printf("\nEnter the second Round Percentage:-");
        scanf("%f",&per);
        if(per>50&& per<100)
        {
            printf("You are selected Second Round Try For Third Round!\n");
             printf("\nEnter the third Round Percentage:-");
            scanf("%f",&per);
            if(per>30 && per<100)
            {
              printf("You are selected Third Round Try For Fourth Round!\n");
             printf("\nEnter the Fourth Round Percentage:-");
            scanf("%f",&per);
            if(per>40 && per<100)
            {
              printf("Congratulation You Are Selected");
            }
            else
            {printf("You are not selected  Try Again!!");

            }
            }
            else
            {
                 printf("You are not selected in fourth round Try Again!!");

            }
        }
        else
        {
             printf("You are not selected in third round Try Again!!");

        }

    }
    else
    {
     printf("You are not selected Try Again!!");
    }
}
