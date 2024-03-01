#include<stdio.h>
int main()
{
    int a,i=1;
    char ss;
    puts("Give a no:");
    scanf("%d",&a);
    bca:
        printf("%d X %d =  %d\n",a,i,(a*i));
        i++;
        if(i<=10)
        goto bca;
            //printf("1.Zack.\n2.Zack.\n3.Zack");
}
