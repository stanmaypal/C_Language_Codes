#include<stdio.h>
int main()
{
    int a=67;
    int b=20;
    //printf("%d",(a!=12)&&(a==12));
    int max=(a>b)?a:b;
    int min=(a<b)?a:b;

    printf("Max value is %d\n",max);
    printf("Min value is %d",min);
}
