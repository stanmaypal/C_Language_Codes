#include<stdio.h>
int main()
{
    int sp,st,i;
    printf("Give a NO1:");
    scanf("%d",&st);
    printf("Give a NO2:");
    scanf("%d",&sp);

    for(i=st;i<=sp;i++)
    {
        printf("%c\n",i);
    }
}
