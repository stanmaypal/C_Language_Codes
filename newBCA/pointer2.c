#include<stdio.h>
int main()
{
    int a=50;
    int *p=&a;
    printf("Value D =%d\n",p);
    printf("Value P =%p\n",p);
    printf("Value X =%x\n",p);
    printf("Value U =%u\n",p);
    printf("Value  U =%u\n",*p);
}
