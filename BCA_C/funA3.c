#include<stdio.h>
int sum1,n1,n2;
int sum(int a,int b)
{
 sum1=a+b;
printf("Sum =%d",sum1);
}
int main()
{
    printf("input two Value:");
    scanf("%d %d",&n1,&n2);
    sum(n1,n2);
}
