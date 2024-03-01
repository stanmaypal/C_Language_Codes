#include<stdio.h>
//int name(char,int);
int name(char sp[],int age)
{
    printf("Your name is %s\nYour age is %d",sp,age);
}
int main()
{
    char sa="Sarvesh";
    int age1=22;
    name(sa,age1);

}
