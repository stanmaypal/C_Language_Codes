#include<stdio.h>
int main()
{
    int tb,i,sum;
    printf("Give a No:");
    scanf("%d",&tb);
    for(i=1;i<=10;i++)
    {
        sum=tb*i;
        printf("%d X %d = %d\n",tb,i,sum);
    }

}
