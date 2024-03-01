#include<stdio.h>
int main()
{
        int a=1,tb;
        char opt;

    do
    {
           printf("Give a No:-");
    scanf("%d",&tb);

        for(int i=1;i<=10;i++)
        {
         printf("%d X %d = %d\n",i,tb,(tb*i));
        }

         fflush(stdin);
         printf("Repeat again Press X");
         scanf("%c",&opt);
    }
    while(opt=='c'||opt=='C'||opt);

}
