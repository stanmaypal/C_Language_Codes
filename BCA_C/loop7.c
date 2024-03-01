#include<stdio.h>
int main()
{
    int i,j=1,tb;
    while(j<=10)
    {
         printf("Give a No:");
        scanf("%d",&tb);
        for(i=1;i<=10;i++)
        {
          printf("%d X %d = %d\n",tb,i,(i*tb));
        }
        j++;
    }
}
