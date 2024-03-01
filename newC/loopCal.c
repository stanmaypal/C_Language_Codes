#include<stdio.h>
int main()
{
    char opt,op;
    do
        {
        int a,b;
    printf("Enter 1st Value:");
    scanf("%d",&a);
    printf("Enter 2nd Value:");
    scanf("%d",&b);
    fflush(stdin);

    printf("Enter Operator:");
    scanf("%c",&op);
    switch(op)
    {
    case '+':
        printf("Sum =%d\n",a+b);
        break;
        case '-':
        printf("Sub =%d\n",a-b);
        break;
        case '*':
        printf("MLT =%d\n",a*b);
        break;
        case '/':
        printf("Div =%d\n",a/b);
        break;
        default:
            printf("invalid!!");
    }

    fflush(stdin);
       printf("Press M for More");
       scanf("%c",&opt);
    }
    while(opt=='m'||opt=='M');
}
