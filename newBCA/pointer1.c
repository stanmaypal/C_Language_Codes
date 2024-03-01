#include<stdio.h>
int main()
{
    int num=15;
    int *ptr;
    ptr=&num;
    printf("Value=%d\n",num);
    printf("Address of D =%d\n",ptr);
    printf("Address of D =%p\n",ptr);
    printf("Address of D =%x\n",ptr);
    printf("Address of D =%d\n",*ptr);
}
