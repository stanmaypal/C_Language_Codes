#include<stdio.h>
int main()
{
    int x=10;
    int y=12;
    int z=10;
    int p=14;
   /// printf("%d\n",(x>y));
    ///printf("%d\n",(x==z));
    printf("%d\n",(x<y)&&(z<p));//both
    printf("%d\n",(x<y)||(z>p));//any
    printf("%d",x!=z);

}
