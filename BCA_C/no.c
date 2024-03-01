#include<stdio.h>
int main()
{
     int no;
    printf("Enter a no:");
    scanf("%d",&no);
    if(no>0)
    {
        printf("%d is +",no);
    }
    else if(no<0)
    {
        printf("%d is -",no);
    }
    else
    {
        printf("%d is 0",no);
    }
}
