#include<stdio.h>
int main()
{
    int r,c;
    printf("Enter Row");
    scanf("%d",&r);
    printf("Enter Column");
    scanf("%d",&c);

    int arr[r][c];
    int a,b;
    for(a=0;a<r;a++)
    {
        for(b=0;b<c;b++)
        {
          printf("Enter no[%d][%d]",a,b);
            scanf("%d",&arr[a][b]);
        }p
    }
     for(a=0;a<r;a++)
    {
        for(b=0;b<c;b++)
        {
          printf("%d\t",arr[a][b]);

        }
        printf("\n");
    }

}
