#include<stdio.h>
#define id 12345
#define pass 9273
int main()
{
    int id1,pass1;
    printf("Enter Your UserId:");
    scanf("%d",&id1);
    printf("Enter Your Password:");
    scanf("%d",&pass1);
    if(id1==id && pass1==pass)
    {
      printf("Log In Success!");
    }
    else
    {
        printf("invalid !!");
    }
}
