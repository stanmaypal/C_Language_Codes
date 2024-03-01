#include<stdio.h>
int main()
{
    int n1,n2;
    char opt;
    printf("Enter 1st No:");
    scanf("%d",&n1);
    printf("Enter 2nd No:");
    scanf("%d",&n2);

    fflush(stdin);
    printf("Enter OPT:");
    scanf("%c",&opt);
    if(opt=='+')
    {
        printf("Sum =%d",(n1+n2));
    }
    else if(opt=='-')
    {
        printf("Sub =%d",(n1-n2));

    }
    else if(opt=='*')
    {
        printf("MLT =%d",(n1*n2));

    }
    else if(opt=='/')
    {
        printf("Div =%d",(n1/n2));

    }
    else{
        printf("invalid");
    }
}
