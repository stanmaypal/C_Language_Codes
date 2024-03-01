#include<stdio.h>
int main()
{
    int md[2][2],i,j;
    md[0][0]=12;
    md[0][1]=10;
    md[1][0]=14;
    md[1][1]=34;

    for(i=0;i<3;i++)
    {
      for(j=0;j<3;j++)
      {
        printf("%d\t",md[i][j]);
      }
      printf("\n");
    }

}
