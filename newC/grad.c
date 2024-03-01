#include<stdio.h>
int main()
{
    int per;
    printf("Give a Mark Percentage:");
    scanf("%d",&per);
    if(per>33 && per<50)
    {
        printf("Pass with D Grade");
    }
    else if(per>50 && per<70)
    {printf("Pass with C Grade");

    }
}
