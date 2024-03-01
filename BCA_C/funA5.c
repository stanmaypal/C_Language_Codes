#include<stdio.h>
/*int main()
{
    char name[1];
    printf("Enter your Name:");
    scanf("%s",&name);
    printf("Your name is %s",name);
}*/
int student(char name[],int age)
{
    printf("Your Name is %s\nYour Age is %d\n" ,name,age);
}
int demo(char sp[],int no)
{
  printf("Your data is %s\nYour no is %d\n" ,sp,no);
}
int main()
{
    int age1;
    char data[20];
   // int age3=21;
   // char data1[]="Vikash";

   printf("Input Your name:");
   scanf("%s",&data);
   //fflush(stdin);
   printf("input your age:");
   scanf("%d",&age1);

    student(data,age1);
    demo(data,age1);
    //student(data1,age3);
}
