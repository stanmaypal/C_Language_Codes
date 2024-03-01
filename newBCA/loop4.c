#include<stdio.h>
int main()
{
    int sum=0,i,st,en;
    char re;
do
{
        printf("input start point :");
        scanf("%d",&st);
        printf("input end point :");
        scanf("%d",&en);
        for(i=st;i<=en;i++)
        {
            sum=sum+i;
          //printf(" %d =%d\n",i,(sum=sum+i));
        }
        fflush(stdin);
       printf("Sum=%d\n",sum);
       printf("Press R for Repeat :");
       scanf("%c",&re);


}
while(re=='R'||re=='r');

}
