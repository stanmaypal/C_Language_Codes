#include<stdio.h>
int r,area,no;
 int bca()
 {
   printf("Enter the Radius:");
   scanf("%d",&r);
   area=3.14*r*r;
   printf("Area Of Circle=%d",area);
 }
 int table()
 {
     printf("Input a no:");
     scanf("%d",&no);
     for(int i=1;i<=10;i++)
     {
         printf("%d\n",i*no);
     }
 }
 int main()
    {
        int opt;
        char re;
        do
        {
            printf("1.Area\n2.Table");
     scanf("%d",&opt);
     switch(opt)
     {
     case 1:
         bca();
        break;
     case 2:
         table();
        break;
     default:
        printf("erroe!!");
     }
            fflush(stdin);
            printf("Repeat again Press Y");
            scanf("%c",&re);
        }
        while(re=='Y'||re=='y');
     //bca();
     }
