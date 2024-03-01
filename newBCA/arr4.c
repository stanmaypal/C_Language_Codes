#include<stdio.h>
#
int main()
{
    int num[5],i,sum=0;
    for(i=0;i<5;i++)
    {
        printf("Enter the No Of Index[%d]:",i);
        scanf("%d",&num[i]);
        sum=sum+num[i];
    }
    printf("Total Sum %d\n",sum);
    int avg=sum/5;
    printf("Total AVG %d",avg);
}
