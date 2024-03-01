#include<stdio.h>
int main()
{
    float n1,n2,res;
    char opt;
    printf("Enter the No1:");
    scanf("%f",&n1);

    fflush(stdin);

    printf("Enter the Opt:");
    scanf("%c",&opt);

    printf("Enter the No2:");
    scanf("%f",&n2);

    if(opt=='+')
    {
       res=n1+n2;
       printf("Result =%f",res);
    }
    else if(opt=='-')
    {
       res=n1-n2;
       printf("Result =%f",res);
    }
    else if(opt=='*')
    {
         res=n1*n2;
       printf("Result =%f",res);
    }
    else if(opt=='/')
    {
         res=n1/n2;
       printf("Result =%f",res);
    }
    else
    {
        printf("Invalid !!");
    }
}
