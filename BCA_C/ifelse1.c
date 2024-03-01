#include<stdio.h>
int main()
{
    int age;
   // printf("%d",(age>18));
   printf("Enter Age:");
   scanf("%d",&age);
   if(age>=18 && age<100)
   {
    printf("You Can Vote");
   }
   else
   {
      printf("You Can't vote");
   }
}
