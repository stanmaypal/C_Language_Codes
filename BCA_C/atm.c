#include<stdio.h>
#define amt 10000
#define pass 4567
int main()
{
    int opt,pin,damt,camt;
    printf("1.Balance Enquary\n2.Debit Amount\n3.Credit Amount\n");
    scanf("%d",&opt);
    switch(opt)
    {
    case 1:
        printf("Enter Your Pin:");
        scanf("%d",&pin);
        if(pin==pass)
        {
            printf("Your Current Balance %d",amt);
        }
        else
        {
            printf("Invalid Pin!!");
        }
        break;
    case 2:
        printf("Enter Debit Amount :");
        scanf("%d",&damt);
        printf("Enter Your Pin:");
        scanf("%d",&pin);
        if(pin==pass)
        {
            printf("Collect Your Amount %d\n",damt);
            printf("Your Current Balance %d",(amt-damt));

        }
        else
        {
            printf("Invalid Pin!!");
        }
        break;
    case 3:
        printf("Enter Credit Amount :");
        scanf("%d",&camt);
        printf("Enter Your Pin:");
        scanf("%d",&pin);
        if(pin==pass)
        {
          printf("Credited Your Amount %d\n",camt);
            printf("Your Current Balance %d",(amt+camt));

        }
        else
        {
            printf("invalid Pin!!");
        }
        break;
    default:
        {
            printf("invalid action");
        }
    }
}
