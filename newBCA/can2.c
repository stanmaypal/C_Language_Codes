#include<stdio.h>
int main()
{
    int age;
    puts("Enter Your age:");
    //printf("Enter Your Age:");
    scanf("%d",&age);

    if(age>18 && age<100)
    {
        puts("You Can Vote");
    }
    else
    {
        puts("You can't vote");
    }
}
