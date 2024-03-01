#include<stdio.h>
int main()
{
    int a,sum=0,st,sp;
    printf("Give a start Point:");
    scanf("%d",&st);
    printf("Give a Stop Point:");
    scanf("%d",&sp);
    for(a=st;a<=sp;a++)
    {
        printf("No is %c\n",a);
       // sum=sum+a;
        //printf("Total Sum =%d\n",sum);
    }
    //printf("Total Sum =%d",sum);
}
