#include<stdio.h>
int main(){
int a,i;
char op;
do{
 printf("Enter a No:");
scanf("%d",&a);
for(i=1;i<=10;i++)
{
    printf("%d X %d = %d\n",a,i,(a*i));
}
fflush(stdin);
printf("Repeat Again press P:");
scanf("%c",&op);

}
while(op=='P'||op=='p');
//while(a<=10);



}
