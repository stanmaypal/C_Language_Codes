#include<stdio.h>
int age1=22;//Global
int main()
{
     auto int age =20;//local
    printf("Age =%d\n",age1);
    bca();
}
int bca()
{
    printf("New Age =%d",age1);
}
