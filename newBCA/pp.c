#include<stdio.h>
int main()
{
    int a=45;
    int *b=;
    int **c;
   b=&a;
   c=&b;
    printf("A.Value is %d\n",a);
    printf("B.Value is %x\n",b);
    printf("C.Value is %x\n",c);
}

