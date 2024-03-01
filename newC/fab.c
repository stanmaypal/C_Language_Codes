#include<stdio.h>
int fac()
{
    int f=1,f1;

    printf("Enter a no:");
    scanf("%d",&f1);
    for(int i=1;i<=f1;i++)
    {
      f=f*i;
    //printf("%d X %d =%d",f,i,(f*i));
        printf("%d\n",f);
    }

}
int main()
{
    fac();
}
