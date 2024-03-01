#include<stdio.h>
int main()
{
    int marks[2][3];
    int i,j;
   //int per[2][2];
    marks[0][0]=23;
    marks[0][1]=24;
    marks[0][2]=25;
    marks[1][0]=31;
    marks[1][1]=32;
    marks[1][2]=34;
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
        printf("%d\t",marks[i][j]);
        }
        printf("\n\n");
    }
    //printf("Value[0][2] %d",marks[0][0]);

}
