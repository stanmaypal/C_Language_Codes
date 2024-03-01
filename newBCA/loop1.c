#include<stdio.h>
int main()
{
int st,sp;
printf("Enter Start Point:");
scanf("%d",&st);
printf("Enter Stop Point");
scanf("%d",&sp);

    for(int a=st;a<=sp;a++)
    {

      if(a%2==0)
      {
        printf(" Odd No:%d\n",a);
      }
        printf("%d\t",a);
        printf("%d.BCA\t",a);
    }
}
