#include<string.h>
#include<stdio.h>
int main()
{
    char str1[20];
    char str2[20];
    puts("Enter String 1:");
    gets(str1);
    puts("Enter String 2:");
    gets(str2);
    if(strcmp(str1,str2)==0)
    {
    printf("Both are same");
    }
    else
    {
        printf("Both are not same");
    }
}
