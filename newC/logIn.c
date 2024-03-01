#include<stdio.h>
int main()
{
    int user;
    int pass;
    printf("Enter Your UserId:");
    scanf("%d",&user);
    printf("Enter Your Password:");
    scanf("%d",&pass);
    /*printf("YOur Name is %s\n",user);
    printf("YOur Pass is %s\n",pass);*/

    //printf("%d",(user=='abc@123'));
    if(user==98765 &&pass==123)
    {
        printf("Log In Success");
    }
    else
    {

    printf("invalid id and Password");
    }
}
