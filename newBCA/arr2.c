#include<stdio.h>
int display(int,int);
display(age1,age2)
{
    printf("Age1=%d\n",age1);
    printf("Age2=%d\n",age2);
}
int main()
{
    int arr[5];
   // printf("Input 5 No:");
    for(int i=0;i<5;i++)
    {
    printf("Input 5 No[%d]:",i);
     scanf("%d",&arr[i]);
    }
    //scanf("%d %d",&arr[0],&arr[1],&arr[2]);
    /* printf("Input two Age:");
    scanf("%d",&arr[1]);*/
    display(arr[1],arr[0]);
}
