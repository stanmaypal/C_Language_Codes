#include<stdio.h>
int main()
{
    int st,sp,i;
    printf("Enter the Start Point:");
    scanf("%d",&st);
    printf("Enter the Stop Point:");
    scanf("%d",&sp);

    for(i=st;i<=sp;i++)
    {
       // printf("No Is %d\n",i);
       if(i%2==0)
       {
           printf("%d is Even No\n",i);
       }
    }
}
