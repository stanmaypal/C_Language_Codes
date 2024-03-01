#include<stdio.h>
int main()
{

    int sum=0,ttl=0,st,sp;
    printf("enter st point and sp point");
    scanf("%d %d",&st,&sp);
    int a=st;
    while(a<=sp)
    {
        if(a%2==0)
        {
          printf("%d\t",a);
          sum=sum+a;
          ttl=ttl+1;
        }
        a++;
    }
    printf("\nTotal No:%d\n",ttl);
    printf("Total Sum: %d\n",sum);

}
