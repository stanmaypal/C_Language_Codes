#include<stdio.h>
int main()
{
    int arr[3];
    arr[0]=12;
    arr[1]=13;
    arr[2]=15;

    int arr1[]={1,3,5,6,7,5};
    printf("Value %d",arr1[2]);
    printf("Value %d",arr[0]);
    printf("Value %d",arr[2]);
    for(int i=0;i<20;i++)
    {
        printf("Value of[%d]=%d\n",i,arr1[i]);
    }
}
