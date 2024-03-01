#include<stdio.h>
int main()
{
    int a=1;
    char opt;
    do{
        printf("Hello World!!\n");
        printf("Repeat Again Press S;");
        scanf("%c",&opt);
        fflush(stdin);
    }
    while(opt=='S'||opt=='s');
}
