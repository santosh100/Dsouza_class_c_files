#include<stdio.h>
#include<conio.h>
void main()
{
	int n,p=0,r=0,t=0,s=0,u=0;
	clrscr();
	printf("Enter any no:\t");
	scanf("%d",&n);
	p=n;
	r=p*p;
	while(p>0)
	{
		t=p%10;
		s=s*10+t;
		p/=10;
	}
		s=s*s;
	while(s>0)
	{
		t=s%10;
		u=u*10+t;
		s/=10;
	}
	if(u==r)
		printf("%d is magic no",n);
	else
		printf("%d is not magic no",n);
}