#include<stdio.h>
int main()
{
    int a = 15, b = 10, max,max1;
max = (a > b) ? a : b;  // max is assigned the larger of a and b
max1 = (b > a) ? a : b;  // max is assigned the larger of a and b
printf("%d\n",max);
printf("%d",max1);
}
