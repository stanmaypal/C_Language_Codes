#include<string.h>
#include<stdio.h>
int main()
{
    char fname[20]={"Arun"};
    char lname[20]={"Yadav"};
    char full[20];
    strcat(fname,lname);
    strcpy(full,fname);
    printf("Your name is %s",full);
}
