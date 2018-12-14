#include<stdio.h>
#include<conio.h>
void main()
{
	int n,p,s,t,x,y;
	clrscr();
	for(n=2,t=0,s=0;n<=100;n++)
	{
		p=n;
		s=p*p;
		x=0;
		while(p>0)
		{
			t=p%10;
			x=x*10+t;
			p/=10;
		}
		x=x*x;
		y=0;
		while(x>0)
		{
			t=x%10;
			y=y*10+t;
			x/=10;
		}
		if(y==s)
			printf("\n Magic no:= %d",n);
	}
}