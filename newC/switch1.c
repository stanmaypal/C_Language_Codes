#include<stdio.h>
int main()
{
    char ap;
    printf("Give a Alpha!!");
    scanf("%c",&ap);
    switch(ap)
    {
    case 'a':
        printf("%c is Vowel",ap);
        break;
    case 'A':
        printf("%c is Vowel",ap);
        break;

    default:
        printf("%c is Conso",ap);
    }
}
