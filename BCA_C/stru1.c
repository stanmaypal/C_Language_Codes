#include<stdio.h>
struct data{
    int roll;
    char name[20];
};
int main()
{
    int size,i;
    printf("No of Data");
    scanf("%d",&size);
    struct data s1[size];
   for(i=0;i<size;i++)
   {
    printf("%d. Enter Roll:",i+1);
   scanf("%d",&s1[i].roll);
   fflush(stdin);
   puts("Enter Name:");
   gets(s1[i].name);
   }

for(i=0;i<size;i++)
{
    printf("%d.Name=%s\t",i+1,s1[i].name);
    printf("%d.Roll=%d\n",i+1,s1[i].roll);
}


}
