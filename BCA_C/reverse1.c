#include<stdio.h>
int main()
{
    int num,bca,rev=0;
    printf("Give a no:");
    scanf("%d",&num);
    int niit=num;
    //printf("1.Real No %d\n",num);
    while(num!=0)
    {
        bca=num%10;
        rev=rev*10+bca;
        num=num/10;
    }

   // printf("2.Real No %d\n",num);
    printf("Real no is %d\n",niit);
    printf("Reverse no is %d\n",rev);
    if(niit==rev)
    {
        printf("No is Palidrome no");
    }
    else
    {
       printf("No is not Palidrome no");
    }
    }


