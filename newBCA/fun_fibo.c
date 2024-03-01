#include<stdio.h>
int n1=0,n2=1,n3,num,i;
int fibo()
{
    printf("Enter a no:");
    scanf("%d",&num);
   printf("%d\t%d ",n1,n2);
for(i=2;i<=num;i++)
{
    n3=n1+n2;
    printf("%d\t",n3);
    n1=n2;
    n2=n3;
}
}

int main()
{
    fibo();
}
