#include<stdio.h>
int main()
{
    int i,sum=0,cout=0;
    for(i=13;i<=50;i++)
    {
        printf("%d\n",i);
        sum=sum+i;
        cout=cout+1;
        // printf("Total Sum =%d\n",sum);
    }
    printf("Total Sum =%d\n",sum);
    printf("Total total =%d",cout);
}
