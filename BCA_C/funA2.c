#include<stdio.h>
int bca();
int no;
bca()
{
    printf("Hello");
}
dca()
{
  printf("Hello Vikash\n");
}
int main()
{
    printf("Input a no:");
    scanf("%d",&no);
    if(no==1)
    {
        bca();
    }
    else if(no==2)
    {
      dca();
    }
    else
    {
        printf("invalid!");
    }
}
