#include<stdio.h>
int main()
{
    int tb;
    printf("Give a No:");
    scanf("%d",&tb);

     for(int a=1;a<=10;a++)
     {
         printf("%d X %d = %d\n",a,tb,(a*tb));
       // printf("%d.Hello World\n",a);
      /* if(a%2==1)
       {
           printf("%d is Even No\n",a);
       }*/
     }
}
