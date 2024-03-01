#include<stdio.h>
int pin=12345;
int q,s,op;
char per;
int qube()
{
   printf("Enter a No:");
    scanf("%d",&q);
    printf("%d Qube is %d",q,(q*q*q));

}
int main()//main function
{
    do{
            printf("1.Qube\n2.Square");
    scanf("%d",&op);
    switch(op)
    {
    case 1:
        qube();
        break;
    case 2:
        sq();
        break;
    default:
        printf("Invalid!!");
    }

    fflush(stdin);

       printf("\nRepeat for Press Y");
       scanf("%c",&per);
    }
    while(per=='Y'||per=='y');


}
int sq()
{
    printf("Enter a No:");
    scanf("%d",&s);
    printf("%d square is %d",s,(s*s));
   }
