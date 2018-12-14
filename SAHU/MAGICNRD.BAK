#include<stdio.h>
#include<conio.h>
void main()
{
	int n=2,p=0,s=0,t,x,y;
	clrscr();
	while(n<=100)
	{
		for(p=n,s=p*p,t=0,x=0;p>0;p/=10)
		{
			t=p%10;
			x=x*10+t;
		}
		for(x=x*x,y=0;x>0;x/=10)
		{
			t=x%10;
			y=y*10+t;
		}
		if(y==s)
			printf("\n Magic no:= %d",n);
	n++;
	}
}