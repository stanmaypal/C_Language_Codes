#include<stdio.h>
//int bca();
int age,n1,n2,opt;
int bca()
{
    //int age;
   // printf("Hello Developers!\n");
    //niit();
    printf("Enter your age ");
scanf("%d",&age);
printf("Your age is %d",age);
}
int niit()
{
    printf("give a no1:");
    scanf("%d",&n1);
    printf("Sq=%d",n1*n1);

}
int niit1()
{
    printf("give a no2:");
    scanf("%d",&n2);
    printf("Qube=%d",n2*n2*n2);
}
int main()
{
    printf("1.Square\.2.Qube");
    scanf("%d",&opt);
    switch(opt)
    {

    case 1:
        niit();
        break;
    case 2:
        niit1();
        break;
    default:
        printf("invalid");
    }
}
