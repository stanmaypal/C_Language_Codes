#include<stdio.h>
int main()
{
    int no;
    printf("Give a Value:-");
    scanf("%d",&no);
    if(no>0)
    {
        printf("%d is Positive No",no);
    }
    else if(no<0)
    {
        printf("%d is Negative No",no);
    }
    else if(no==0)
    {
        printf("%d is Zero",no);
    }
    else
    {
        printf("Error!!");
    }
}
