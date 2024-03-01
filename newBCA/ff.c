#include<stdio.h>
int main()
{
    int s,p;
    printf("Enter the two no:");
    scanf("%d %d",&s,&p);
    sum(s,p);
}
int sum(int a,int b)
{
    int sum=a+b;
    printf("%d",sum);

}
