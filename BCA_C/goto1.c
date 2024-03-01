#include<stdio.h>
int main()
{
    int no,i=1;
    char cg;
    bca:
        printf("enter a no:");
    scanf("%d",&no);

        for(int j=1;j<=10;j++)
        {
            printf("%d\n",j*no);
        }
        i++;
        fflush(stdin);
        printf("are you repeat");
        scanf("%c",&cg);
        if(cg=='Y'||cg=='y')
        goto bca;
}
