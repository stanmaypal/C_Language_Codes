#include<stdio.h>
#include<string.h>
int main()
{
    char data[20];
    int c=0,s=0,i=0;
    puts("Enter Your Name:");
    gets(data);
    while(i<strlen(data))
    {
        if(data[i]=='a'||data[i]=='e'||data[i]=='i'||data[i]=='o'||data[i]=='u')
        {
            c=c+1;
           // c++
        }
        else
        {
          s=s+1;
        }
        i++;
    }
    printf("Total Vowel =%d\n",c);
    printf("Total Consonents =%d",s);
}
