#include<stdio.h>
int main()
{
    int no;
    char sd;
    do
    {
        printf("Input a no:");
        scanf("%d",&no);
        if(no%2==0)
        {
            printf("%d is even no\n",no);
        }
        else
        {
            printf("%d is odd no\n",no);
        }
        fflush(stdin);
        printf("Press C for Continue...");
        scanf("%c",&sd);

    }
    while(sd=='C'|| sd=='c');
}
