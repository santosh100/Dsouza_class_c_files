#include<stdio.h>
#include<conio.h>
void main()
{
	int n,t=0,s=0,p=0;
	clrscr();
	printf("Enter three digit\t");
	scanf("%d",&n);
	p=n;
	while(p>0)
	{
		t=p%10;
		s=s+t*t*t;
		p/=10;
	}
		if(s==n)
			printf("%d is Armstrong no",n);
		else
			printf("%d is not Armstrong no",n);
}