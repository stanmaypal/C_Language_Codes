#include<stdio.h>
int main()
{
    char va[15];
    printf("Enter Words:-");
    scanf("%s",&va);
    int i=0;
    int count=0;
    while(i<15)
    {
        if(va[i]=='a'||va[i]=='e'||va[i]=='i'||va[i]=='u'||va[i]=='o')
        {
            count=count+1;
        }
        i++;
    }
    printf("Total Vowel found=%d",count);
}
