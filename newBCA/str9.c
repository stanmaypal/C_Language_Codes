#include<string.h>
#include<stdio.h>
int main()
{
   char name[]="SuraJ";
   printf("Real Name=%s\n",name);
   printf("LowerCase Name=%s",strlwr(name));
   printf("UpperCase Name=%s",strupr(name));

}
