#include<stdio.h>
#include<conio.h>
void main()
{
	int n,*a,t,s;
	clrscr();
	printf("\n Enter no:");
	scanf("%d",&n);
	a=&n;
	for(s=0;*a>0;*a/=10)
	{
		t=*a%10;
		s=s*10+t;
	}
	printf("\n reverse = %d",s);
}