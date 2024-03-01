#include<stdio.h>
int n1,n2;
char opt,re;

int sum(int a,int b)
{
    printf("Sum =%d",(a+b));
}
int sub(int a,int b)
{
    printf("Sub =%d",(a-b));
}
int main()
{
    do
    {
        printf("Input A no:");
  scanf("%d",&n1);
  fflush(stdin);
  printf("Input A opt:");
  scanf("%c",&opt);
   printf("Input A no2:");
  scanf("%d",&n2);

  switch(opt)
  {
  case '+':
      sum(n1,n2);
    break;
  case '-':
      sub(n1,n2);
    break;
  default:
    printf("invalid");
  }
        fflush(stdin);
     printf("\nRepeat again press Y");
     scanf("%c",&re);
    }
    while(re=='Y'|| re=='y');

}
