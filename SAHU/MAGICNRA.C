#include<stdio.h>
#include<conio.h>
void main()
{
	int n,p,t,s,x,y;
	clrscr();
	for(n=2;n<=100;n++)
	{
		for(p=n,t=0,x=0,s=p*p;p>0;p/=10)
		{
			t=p%10;
			x=x*10+t;
		}
		x=x*x;
		for(y=0;x>0;x/=10)
		{
			t=x%10;
			y=y*10+t;
		}
		if(s==y)
			printf("\nMagic no:= %d",n);
	}
}