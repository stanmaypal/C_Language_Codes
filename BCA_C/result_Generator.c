#include<stdio.h>
int marks[5];
char name[];
int roll,sum=0,i,per;
char course[]="DCA";
int main()
{
    printf("Student Name:");
    gets(name);
      printf("Roll:");
    scanf("%d",&roll);
    printf("C:");
    scanf("%d",&marks[0]);
    printf("CPP:");
    scanf("%d",&marks[1]);
    printf("Java:");
    scanf("%d",&marks[2]);
    printf("Python:");
    scanf("%d",&marks[3]);
    printf("JavaScript:");
    scanf("%d",&marks[4]);
    for(i=0;i<5;i++)
    {
        sum=sum+marks[i];
    }
   // printf("Total Sum=%d",sum);

        per=sum/5;

    //grade(per);


 result(name,roll,marks[0],marks[1],marks[2],marks[3],marks[4],sum,per);
}
int grade(int gd)
{
    if(gd>0&&gd<33)
    {
        printf("Fail with %d %",gd);
    }
    else if(gd>33&& gd<55)
    {
         printf("D  Grade with %d %",gd);

    }
    else if(gd>55&& gd<75)
    {
         printf("C  Grade with %d %",gd);

    }
    else if(gd>75&& gd<85)
    {
         printf("B  Grade with %d %",gd);

    }
    else if(gd>85&& gd<100)
    {
         printf("A  Grade with %d %",gd);

    }


}
int result(char name[],int rl,int c,int cpp,int jv,int py,int js,int sm,int p)
{
    printf("-----------------------------------------\n");
    printf("****************Result*******************\n");
    printf("****************Balaji Academy*******************\n");
    printf("****************Gorakhpur*******************\n");
    printf("-----------------------------------------\n");
    printf("StudentName:%s\n",name);
    printf("StudentRoll:%d\n",rl);
    printf("StudentCourse:%s\n",course);
    printf("-----------------------------------------\n");
    printf("C\tC++\tJava\tPython\t JavaScript\n");
    printf("%d\t%d\t%d\t%d\t%d\n",c,cpp,jv,py,js);

    printf("Total Marks:%d\n",sm);
    printf("Total %:%d\n",p);
    printf("Grade:");
    grade(p);


}

