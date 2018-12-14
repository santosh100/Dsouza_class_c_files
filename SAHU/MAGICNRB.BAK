#include<stdio.h>
#include<conio.h>
void main()
{
	int n=2,p=0,s=0,t=0,x=0,y=0;
	clrscr();
	while(n<=100)
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
	n++;
	}
}