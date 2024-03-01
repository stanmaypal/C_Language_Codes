#include<stdio.h>
int main()
{
    int no[3][3],i,j;
    for(i=0;i<3;i++)//row
    {
        for(j=0;j<3;j++)//col
        {
            printf("Enter the Value[%d][%d]",i,j);
            scanf("%d",&no[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",no[i][j]);
        }
        printf("\n");
    }

}
