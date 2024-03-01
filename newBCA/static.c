#include<stdio.h>

int bca()
{
    int n1=100;
    static int n2=100;
    n1=n1+1;
    n2=n2+1;
    printf("Value of N1=%d\n",n1);
    printf("Value of N2=%d\n",n2);
}
int main()
{
    bca();
    bca();
    bca();
    bca();
    bca();
}

