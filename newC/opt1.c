#include<stdio.h>
int main()
{
    int a=10;
    int b=14;
    int sum,sub,mlt,div;
        printf("Before value of a =%d\n",a);

    sum=a+b;
    sub=a-b;
    mlt=a*b;
    div=a/b;
    --a;
    printf("after value of a =%d",a);
    printf("Sum =%d\nSub=%d\nMlt=%d\nDiv=%d",sum,sub,mlt,div);
}
