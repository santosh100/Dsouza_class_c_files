#include<stdio.h>
#include<conio.h>
void main()
{
	int n,x=0,y=1,t=0;
	clrscr();
	printf("Enter digits:\t");
	scanf("%d",&n);
	while(n>0)
	{
		t=n%10;
		if(t%2==0)
			x=x+t;
		else
			y=y*t;
		n/=10;
	}
		x=x+y;
		printf("Sum of enven no and multiplication of odd no then sum= %d",x);

}