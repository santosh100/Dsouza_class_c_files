#include<stdio.h>
#include<conio.h>
void main()
{
	int n,t,x,y;
	clrscr();
	printf("Enter digits:\t");
	scanf("%d",&n);
	for(t=0,x=0,y=1;n>0;n/=10)
	{
		t=n%10;
		if(t%2==0)
			x=x+t;
		else
			y=y*t;
	}
		t=x+y;
	printf("Sum of even no and multiplication of odd no then sum= %d",t);
}