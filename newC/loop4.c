#include<stdio.h>
int main()
{
    int a=1,tb;
    printf("Give a No:-");
    scanf("%d",&tb);

    while(a<=10)
    {
        //printf("%d.This is While Loop\n",a);
            printf("%d X %d = %d\n",a,tb,(tb*a));
        a++;
    }
}
