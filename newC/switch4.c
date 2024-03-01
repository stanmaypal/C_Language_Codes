#include<stdio.h>
#define pin 1234
#define bln 10000
int cpin;
int main()
{
    int opt;
    printf("Press 1 for Balance Enquary \n");
    printf("Press 2 for Balance Debit\n");
    printf("Press 3 for Balance Credit\n");
scanf("%d",&opt);

switch(opt)
{
case 1:
    printf("Enter Your Pin :");
    scanf("%d",&cpin);
    if(cpin==pin)
    {
        printf("****-------*******\n");
        printf("Your Card *****1233\n");
        printf("Your Balance Is %d\n",bln);
         printf("****-------*******");
    }

    else
    {
        printf("!Invalid Pin\a");
    }
    break;
case 2:
    printf("Enter Your Pin :");
    scanf("%d",&cpin);
    if(cpin==pin)
    {

    int amt;
        printf("Enter Amount :");
        scanf("%d",&amt);
        printf("Your Debit Amount %d\n",amt);
        printf("Now Your Balance is %d",bln-amt);
    }
    else
    {
       printf("!Invalid Pin\a");

    }
    break;
case 3:
     printf("Enter Your Pin :");
    scanf("%d",&cpin);
    if(cpin==pin)
    {
      int amt;
        printf("Enter Amount :");
        scanf("%d",&amt);
        printf("Your Credit Amount %d\n",amt);
        printf("Now Your Balance is %d",bln+amt);

    }
    else
    {
        printf("Invalid Pin");
    }
    break;

default:
    printf("Error!!");
}
}
