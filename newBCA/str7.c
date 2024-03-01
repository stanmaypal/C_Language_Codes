#include<string.h>
#include<stdio.h>
int main()
{
    char name1[]="Suraj";
    char name2[]="Suraj";
    if(strcmp(name1,name2)==0)
    {
        printf("Both are same");
    }
    else
    {
        printf("Both are not same");
    }
}
