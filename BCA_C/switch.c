#include<stdio.h>
int main()
{
    float n1,n2;
    char data;
    printf("Enter a No1 :");
    scanf("%f",&n1);
     printf("Enter a No2 :");
    scanf("%f",&n2);
    fflush(stdin);
     printf("Enter a Opt :");
    scanf("%c",&data);

    switch(data)
    {

    case '+':
        printf("Sum =%f",(n1+n2));

        break;
    case '-':

        if(n1>n2)
        {
            printf("Sub= %f",(n1-n2));
        }
        else
        {
            printf("Sub=%f",(n2-n1));
        }
        //printf("Sub=%d",(n1-n2));
        break;
    case '*':
        printf("MLT=%f",(n1*n2));
        break;
    case '/':
        if(n1>n2)
        {
            printf("Div = %f",(n1/n2));
        }
        else
        {
            printf("Div = %f",(n2/n1));

        }

        break;
    default:
        printf("invalid!!");
    }
}
