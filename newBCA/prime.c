#include<stdio.h>
int num,m,i,pr=0;
int prime()
{
    printf("Give a No:");
    scanf("%d",&num);
    m=num/2;
    for(i=2;i<=m;i++)
    {
        if(num%i==0)
        {
            printf("%d is not a prime no:",num);
            pr=1;
            break;

        }

    }
    if(pr==0)
    {
        printf("%d is a prime no",num);
    }
}
int main()
{
    prime();
}
