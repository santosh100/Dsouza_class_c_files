#include<stdio.h>
#include<conio.h>
void main()
{
	int n,p,x,y,t;
	clrscr();
	printf("Enter digits:\t");
	scanf("%d",&n);
	for(p=1,t=0,x=0,y=1;n>0;n/=10,p++)
	{
		t=n%10;
		if(p%2==0)
			x=x+t;
		else
			y=y*t;
	}
		t=x+y;
		printf("Sum of even place and multiplication of odd place then sum= %d",t);
}