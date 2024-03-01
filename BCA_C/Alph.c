#include<stdio.h>
int main()
{
    char alph;
    printf("Enter the Alphbet:-");
    scan f("%c",&alph);
    if(alph=='a'||alph=='A'||alph=='E'||alph=='e'||alph=='i'||alph=='I'||alph=='o'||alph=='O'||alph=='u'||alph=='U')
    {
        printf("%c is Vowel",alph);

    }
    /*else if(alph=='e'||alph=='E')
    {
        printf("%c is Vowel",alph);
    }*/
    else
    {
        printf("%c is Consonanet",alph);
    }

}
