#include<stdio.h>
int main()
{
    int gd;
    printf("Input a Percentage:-");
    scanf("%d",&gd);
    if(gd>=33 &&gd<50)
    {
        printf("D Grade with %d",gd);
    }
    else if(gd>50 && gd<70)
    {
       printf("C Grade %d",gd);
    }
    else if(gd>70 && gd<80)
    {
        printf("B Grade with %d",gd);
    }
     else if(gd>80 && gd<=100)
    {
        printf("A Grade with %d",gd);
    }
    else if(gd>1 && gd<33)
    {
        printf("Failed");
    }
    else
    {
        printf("invalid!!");
    }


}
