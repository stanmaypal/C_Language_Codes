#include<stdio.h>
int main()
{
    int tb,i,j=1;
    char opt;
    do{

        printf("Give a No:");
        scanf("%d",&tb);
        for(i=1;i<=10;i++)
        {
          printf("%d X %d = %d\n",tb,i,(i*tb));
        }
        fflush(stdin);
        printf("Repeat again: Press T:");
        scanf("%c",&opt);

//j++;
    }
    while(opt=='t'||opt=='T');
   //while(j<=10);
}
