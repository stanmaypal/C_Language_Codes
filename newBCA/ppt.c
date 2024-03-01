
#include<stdio.h>
int main()
{
	int x,y,temp,*p1,*p2;
	x=21;
	y=44;
	p1=&x;
	p2=&y;
	temp=*p1;
	*p1=*p2;
	*p2=temp;

	printf(" x is %d while y is %d",x,y);
}
