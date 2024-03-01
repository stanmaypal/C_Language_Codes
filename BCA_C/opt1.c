#include<stdio.h>
int main()
{
    int a=19;
    int b=21;
    int sum,sub,mlt,div;
    printf("ADD=%d",a);

    sum=a+b;
    sub=a-b;
    mlt=a*b;
    div=a/b;
    a++;
    --b;
    printf("after ADD=%d",b);
    printf("Sum=%d\nSub=%d\nMlt=%d\nDiv=%d",sum,sub,mlt,div);

}
