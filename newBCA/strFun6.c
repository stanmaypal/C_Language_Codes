#include<string.h>
#include<stdio.h>
int main()
{
    char str1[20];
    puts("Input Name:");
    gets(str1);
    printf("Original Name =%s\n",str1);
    printf("Lower Case Name =%s",strlwr(str1));
}
