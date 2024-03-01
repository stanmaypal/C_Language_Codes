#include<stdio.h>
int myfun1(int,int,int);
int myfun2();
int main()
{
    int a,b,c;
    printf("Enter Three values ");
    scanf("%d %d %d",&a,&b,&c);
    myfun1(a,b,c);
    //printf("Sum =%d",(a+b));
    //printf("a=%d :b=%d",a,b);
}
myfun1(x,y,z)
{
    printf("sum =%d",(x+y+z));
}
