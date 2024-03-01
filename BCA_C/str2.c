#include<stdio.h>
int main()
{
    char name[]="Sarvesh";
    for(int i =0;i<strlen(name);i++)
    {

        for(int j =i;j<=strlen(name);j++)
        {
           printf("%s",name);
        }
        printf("\n");

    }
}
