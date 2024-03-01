#include<stdio.h>
int main()
{
       int num;
    printf("Enter the No.");
    scanf("%d",&num);

    if(num%2==0)
    {
        printf("%d is Even No.",num );
    }
    else
    {
        printf("%d is Odd No.",num);
    }
}
