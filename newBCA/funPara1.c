#include<stdio.h>
int no;

char value[10];

int data(int pc,char name[10])
{
    printf("Your Name is %s\n",name);
    printf("Your Pin No %d\n",pc);

}
int main()
{
    printf("Enter Your Name");
    scanf("%s",&value);
    printf("Enter Your Pin");
    scanf("%d",&no);
    data(456,"BCA");
    data(123,"DCA");
    data(no,value);
    //data(no,value);
    //data(678,"BCA");
}
