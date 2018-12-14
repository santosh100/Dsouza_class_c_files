#include<stdio.h>
#include<conio.h>
void main()
{
	int n,p,t,s;
	clrscr();
	for(n=2;n<=1000;n++)
	{
		s=0;
		p=n;
		while(p>0)
		{
			t=p%10;
			s=s+t*t*t;
			p/=10;
		}
		if(s==n)
			printf("\nArmstrong no:= %d",n);
	}
}