#include<stdio.h>
int main()
{
    int num,rev=0,temp;
    printf("Input a no:");
    scanf("%d",&num);
    while(num!=0)
    {
        temp=num%10;
        rev=rev*10+temp;
        num=num/10;
    }
    printf("Reverse No %d",rev);
}
