#include<stdio.h>//
int myfun(int,int);
int main()
{
    for(int i=1;i<=10;i++)
    {
       myfun(25,3);
    }
}
myfun(a,b)
{
    printf("Sum =%d\n",(a+b));
    printf("This is userDefine Function\n");
}
