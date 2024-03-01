#include<stdio.h>
int main()
{
    int num,res=0,temp,rem;
    printf("Enter the No:");
    scanf("%d",&num);
    rem=num;
    while(num!=0)
    {
        temp=num%10;
        res=res*10+temp ;
        num=num/10;

    }
    printf("NO is %d\n",rem);
    printf("Reverse NO Is %d\n",res);
    if(rem==res)
    {
        printf("No is Palindrom");
    }
    else
    {
        printf("No is not Palindrom");
    }

}
