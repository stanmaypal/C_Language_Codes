#include<stdio.h>
int main()
{
    int a;
    int b;
    int temp;

    printf("Input a no A:");
    scanf("%d",&a);
    printf("Input a no B:");
    scanf("%d",&b);
    int *p=&a;
    int *p1=&b;
    temp=*p;
    *p=*p1;
    *p1=temp;
    printf("A= %u while B=%u",*p,*p1);
}
